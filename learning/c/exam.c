#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "structs.h"
//#include "structs.h"
static int totalNum = 0;
void stackOutputNum(int,int,int,int);
long easyStackOutputNum(int num);
int outNum(int[],int len);
char *MyStrcat(char dstStr[],char srcStr[]);
int main(int argc, char **argv){
    // char mid[9],rear[9];
    // int i = 0;
    // char in = 0;
    // while((in = getchar()) != '\n'){
    //     mid[i] = in;
    //     i++;
    // }
    // mid[i] = '\0';
    // i = 0;
    // while((in = getchar()) != '\n'){
    //     rear[i] = in;
    //     i++;
    // }
    // rear[i] = '\0';
    // BTree *tree = getBinaryTreeFrontOutput(mid,rear,0,strlen(mid)-1,strlen(rear));
    // printBinaryTreeFrontOutput(tree);
    // free(tree);

    // int num = 0;
    // char stack[18] = {0};
    // scanf("%d",&num);
    // //stackOutputNum(0,0,0,num);
    // printf("%ld",easyStackOutputNum(num));

    // int i = 0,isSwap = 0;
    // char in;
    // char src[20] = {0},dest[20] = {0};
    // while((in = getchar()) != EOF){
    //     if(in != ' ' && isSwap == 0){
    //         src[i] = in;
    //         i++;
    //     }
    //     else if(in != ' ' && isSwap == 1){
    //         dest[i] = in;
    //         i++;
    //     }
    //     else if(in == ' ' && isSwap == 0){
    //         i =  0;
    //         isSwap = 1;
    //     }        
    // }
    // char *out = MyStrcat(src,dest);
    // printf("%s",out);
    // free(out);
    int line = 0;
    int times = 0;
    int num = 0;
    char isNum = 0;
    char in = 0;
    STACK *myStack = NULL;
    while((in = getchar()) != EOF){
        if(in == '0' && isNum == 0)
        {
            break;
        }
        if(in >= '0' && in <= '9' && line == 0)
        {
            line = in - 48;
            times = line;
            myStack = createStack(line,myStack);
        }
        else if(in == 'P')
        {
            isNum = 1;
        }
        else if(in == 'O')
        {
            if(myStack->len != 0)
            {
                pop(myStack);
            }
            times--;
        }
        else if(in == 'A'){
            if(myStack->len != 0)
            {
                printf("%d\n",getTop(myStack));
            }
            else{
                printf("E\n");
            }
            times--;
        }
        else if(isNum == 1 && in >= '0' && in <= '9'){
            num = num * 10 + (in - 48);
        }
        else if(isNum == 1 && in == '\n'){
            push(num,myStack);
            times--;
            isNum = 0;
            num = 0;
        }
        if(times == 0)
        {
            if(myStack != NULL)
            {
                deleteStack(myStack);
                myStack = NULL;
            }
            line = 0;
        }
    }
}

char *MyStrcat(char dstStr[],char srcStr[]){
    int srcLen = strlen(srcStr);
    int destLen = strlen(dstStr);
    int i = 0;
    char *out = (char *)malloc(sizeof(char)*(destLen + srcLen + 1));
    while (i < srcLen + destLen){
        if(i < destLen){
            out[i] = dstStr[i];
        }
        else{
            out[i] = srcStr[i - destLen];
        }
        i++;
    }
    out[i] = '\0';
    return out;
}
int outNum(int in[],int len){
    int i = 0,up = 0,temp = 0,turnLeft = 0,tempResult = 0;
    int *tempArray = NULL;
    if(len == 1 && (in[0] == 0 || in[0] == 1)){
        return in[0];
    }
    else{
        if(in[len-1] % 2 == 0){
            while(i < len){
                temp = (in[i] + up * 10) / 2;
                up = in[i]%2;
                in[i - turnLeft] = temp;
                if(i == 0 && temp == 0){
                    turnLeft = 1;
                }
                i++;
            }
            return outNum(in,len - turnLeft);
        }
        else{
            in[len-1] -= 1;
            while(i < len){
                temp = (in[i] + up * 10) / 2;
                up = in[i]%2;
                in[i - turnLeft] = temp;
                if(i == 0 && temp == 0){
                    turnLeft = 1;
                }
                i++;
            }
            tempArray = (int*)malloc(sizeof(int)*(len -turnLeft));
            memcpy(tempArray,in,len - turnLeft);
            tempResult = outNum(tempArray,len - turnLeft);
            free(tempArray);
            in[len- 1 - turnLeft] += 1;
            return tempResult + outNum(in,len - turnLeft);
        }
    }
}
void stackOutputNum(int outNum,int index,int begin,int end){
    if(outNum < end){
        if(begin < end){
            stackOutputNum(outNum,index + 1,begin + 1,end);
        }
        if(index != 0){
            stackOutputNum(outNum + 1,index - 1,begin,end);
        }
    }
    else if(outNum == end){
        totalNum++;
    }
}
//C(n,2n)/(n+1)
long easyStackOutputNum(int num){
    double cUp = 1,cDown = 1;
    long long begin = 2 * num;
    long long down = num;
    for(int i = 0;i < num; i++){
        cUp *= begin;
        begin -= 1;
    }
    for(int j = 0;j < num;j++){
        cDown *= down;
        down -= 1;
    }
    return (long)(cUp/(cDown*(num + 1)));
}