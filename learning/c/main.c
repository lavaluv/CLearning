#include <stdio.h>
#ifndef __INANDOUT__
    #include "inAndOut.h"
#endif
#ifndef __UTIL__
    #include "util.h"
#endif
int main(){
    printf("hello world\n");
    //wordCount();
    //numCount();
    // {
    //     char in[MAXLEN];
    //     int length = getLineLength(in,MAXLEN);
    //     printf("input length: %d\n",length);
    // }
    // printMaxLine();
    {
        char *in = "  hello  ";
        printf("%s\n",trim(in));
    }
}