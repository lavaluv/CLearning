#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "structs.h"
int totalNum = 0;
void stackOutputNum(char *,int,int);
int main(int argc, char **argv){
    char mid[9],rear[9];
    int i = 0;
    char in = 0;
    while((in = getchar()) != '\n'){
        mid[i] = in;
        i++;
    }
    mid[i] = '\0';
    i = 0;
    while((in = getchar()) != '\n'){
        rear[i] = in;
        i++;
    }
    rear[i] = '\0';
    BTree *tree = getBinaryTreeFrontOutput(mid,rear,0,strlen(mid)-1,strlen(rear));
    printBinaryTreeFrontOutput(tree);
    free(tree);

    // int num = 0;
    // char stack[18] = {0};
    // scanf("%d",&num);
    // stackOutputNum(stack,0,1);
    // printf("%d",totalNum);
}
void stackOutputNum(char *stack,int index,int num){
    printf("%d\n",num);
    if(num < 19){
        stackOutputNum(stack,index+1,num+1);
        if(index != 0){
            stackOutputNum(stack,index-1,num+1);
        }
    }
    else if(num == 18){
        totalNum++;
    }
}