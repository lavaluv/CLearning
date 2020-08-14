#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//#include "structs.h"
static int totalNum = 0;
void stackOutputNum(int,int,int,int);
long easyStackOutputNum(int num);
int outNum(int[],int len);
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

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %.2f",a+b+c,((float)a+b+c)/3);
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