#include "inAndOut.h"
/*
    ��ȡ����������һ���ַ�getchar()
    ��ӡ����������һ���ַ�putchar(int)
    EOFΪ�����κ�charֵ��ͬ�������ͣ�ʹ��int����֤������κ�ֵ
*/
//���������еĵ��������������Ϳո���
void wordCount(){
    int input,word = 0,space = 0,enter = 0,state = OUT;
    while ((input = getchar()) != EOF)
    {
        if (input == '\n')
        {
            enter ++;
        }
        else if (input == ' '){
            space ++;
        }
        if (input == ' ' || input == '\t' || input == '\n')
        {
            state = OUT;
        }
        else if (state == OUT){
            word++;
            state = IN;
        }
    }
    printf("word count:%d;enter count:%d;space count:%d\n",word,enter,space);
}
//���������е������ֳ��ֵ�Ƶ��
void numCount(){
    int input,state = OUT;
    char num[10] = {0};
    while((input = getchar()) != EOF){
        if(input == ' ' || input == '\t' || input == '\n'){
            state = OUT;
        }
        else if(input <= '9' && input >= '0'){
            num[input - '0'] ++;
            state = IN;
        }
    }
    for (size_t i = 0; i < 10; i++)
    {
        printf("number %d's count is:%d\n",i,num[i]);
    }
    
}
//����������
int getLineLength(char * in,int maxlen){
    int input,i = 0;
    while ((input = getchar()) != EOF && input != '\n' && i < maxlen){
        in[i] = input;
        i++;
    }
    in[i] = '\0';
    return i;
}
//�����ַ���
void copyInput(char *from, char *to,int len){
    for(int i = 0; i < len;i++){
        to[i] = from[i];
    }
}