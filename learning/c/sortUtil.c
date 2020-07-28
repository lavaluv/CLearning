#include "sortUtil.h"
#include <stdio.h>
/*

*/
void qsort(int in[],int left,int right){

}
void bubbleSort(SORT_INPUT_TYPE in[],int len){
    int index,temp;
    for(int i = 0;i < len; i++){
        index = i;
        for(int j = i + 1; j < len; j++){
            if(in[index] > in[j]){
                index = j;
            }
        }
        temp = in[index];
        in[index] = in[i];
        in[i] = temp;        
    }    
}
void selectSort(SORT_INPUT_TYPE in[],int len){
    int temp,isSwap = 0;
    for(int i = 0;i < len;i++){
        isSwap = 0;
        for(int j = 1;j < len - i;j++){
            if(in[j - 1] > in[j]){
                temp = in[j];
                in[j] = in[j-1];
                in[j - 1] = temp;
                isSwap = 1;
            }
        }
        if(isSwap == 0){
            break;
        }
    }
}