#include "util.h"
#ifndef __INANDOUT__
    #include "inAndOut.h"
#endif
/*

*/
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