#include "sortUtil.h"
#include <stdio.h>
/*

*/
void qsort(SORT_INPUT_TYPE in[],int left,int right){
    int getqIndex(int[],int,int);
    int key = in[left],index = left;
    if(left >= right){
        return; 
    }
    key = getqIndex(in,left,right);
    getqIndex(in,key + 1,right);
    getqIndex(in,left,key - 1);
}
int getqIndex(int in[],int left,int right){
    int key = in[left];
    while(left < right){
        while(key < in[right] && left < right){
            right--;
        }
        in[left] = in[right];
        while(key > in[left] && left < right){
            left++;
        }
        in[right] = in[left];
    }
    in[left] = key;
    return left;
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