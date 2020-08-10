#include "inAndOut.h"
/*
    获取输入流的下一个字符getchar()
    打印输入流的下一个字符putchar(int)
    EOF为不与任何char值相同的整数型，使用int来保证输入的任何值
*/
//返回输入中的单次数，换行数和空格数
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
//返回输入中单个数字出现的频数
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
//返回输入中
int getLineLength(char * in,int maxlen){
    int input,i = 0;
    while ((input = getchar()) != EOF && input != '\n' && i < maxlen){
        in[i] = input;
        i++;
    }
    in[i] = '\0';
    return i;
}
//复制字符串
void copyInput(char *from, char *to,int len){
    for(int i = 0; i < len;i++){
        to[i] = from[i];
    }
}