#include <stdio.h>
#ifndef __INANDOUT__
    #define __INANDOUT__
    #define IN 1
    #define OUT 0
    #define MAXLEN 1024
    void wordCount();
    void numCount();
    int getLineLength(char * in,int maxlen);
    void copyInput(char * from,char * to,int len);
#endif
