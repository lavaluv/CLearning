#include <stdio.h>
#ifndef __INANDOUT__
    #include "inAndOut.h"
#endif
#ifndef __UTIL__
    #include "util.h"
#endif
#ifndef __SORTUTIL__
    #include "sortUtil.h"
#endif
#ifndef __FINDUTIL__
    #include "findUtil.h"
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
    //{
    //    char *in = "  hello  ";
    //    char *out = trim(in);
    //    printf("%s\n",out;
    //.   free(out);
    //}
    {
        int in[5] = {1,9,0,4,5};
        int len = sizeof(in)/sizeof(in[0]);
        //bubbleSort(in,len);
        qsort(in,0,len-1);
        for (int i = 0;i < 5;i++){
            printf("%d ",in[i]);
        }
        printf("The index is:%d\n",halfFind(in,len,9));
    }
}