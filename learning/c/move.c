#include <stdio.h>
#include <stdlib.h>
#ifndef __UTIL__
    #include "util.h"
#endif
/*
    ÒÆÎ»ÔËËã·û£º&,|,^,<<,>>,~
*/
int main(int argc, char *argv[]){
    printBit(129);
    printBit(129 & 65);
    printBit(129 | 65);
    printBit(129 ^ 65);
    printBit(129 >> 1);
    printBit(129 << 1);
    printf("%d\n",~129);
}