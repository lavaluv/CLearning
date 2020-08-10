#include <stdlib.h>
#include <string.h>
#include "util.h"
#ifndef __INANDOUT__
    #include "inAndOut.h"
#endif
/*

*/
//��ӡ����������У��Լ�����
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
//��������Ķ�������ʽ
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
//��ת�ַ���
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
//ȥ���ַ���ͷβ�Ŀո��Ʊ���ͻ��з�
char * trim(char *str){
    int head = 0,tail = 0;
    size_t i = 0,j = 0;
    for (; i < strlen(str); i++)
    {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
        {
            head = i;
            break;
        }
    }
    for (j = strlen(str) - 1; j >= i; j--)
    {
        if (str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
        {
            tail = j;
            break;
        }
    }
    //ptr handle
    char *out = (char *) malloc(sizeof(char)*(tail - head + 1));
    strncpy(out, str+head, tail - head + 1);
    return out;
}