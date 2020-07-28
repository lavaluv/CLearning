#include "findUtil.h"
#include <stdio.h>
/*

*/
int halfFind(FIND_INPUT_TYPE *in,int len,int pattern){
    int head = 0,index;
    len--;
    while(head <= len){
        index = (head + len)/2;
        if(pattern == in[index]){
            return index;
        }
        else if(pattern > in[index]){
            head = index + 1;
        }
        else{
            len = index - 1;
        }
    }
    return -1;
}