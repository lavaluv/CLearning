#include <stdlib.h>
#include <string.h>
#include "util.h"
#ifndef __INANDOUT__
    #include "inAndOut.h"
#endif
/*

*/
//打印输入中最长的行，以及长度
void printMaxLine(){
    char maxline[MAXLEN],input[MAXLEN];
    int len = 0,max = 0;
    while ((len = getLineLength(input,MAXLEN)) > 0)
    {
        if (max < len)
        {
            max = len;
            copyInput(input,maxline,len);
        }
    }
    printf("The maxline is:%s,length is:%d\n",maxline,max);
}
//输出整数的二进制形式
void printBit(int in){
    char num[32] = {0};
    int i;
    for(i = 0; in > 0;i++){
        num[i] = in % 2 + '0';
        in /= 2;
    }
    char *out = (char *)malloc(sizeof(char)*i);
    strncpy(out,num,i);
    reverse(out);
    printf("The hex string is: %s\n",out);
}
void reverse(char *str){
    char temp;
    size_t i = 0,j = strlen(str) - 1;
    for (; i < j; j--,i++)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
}