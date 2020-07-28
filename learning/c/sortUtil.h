#ifndef __SORTUTIL__
    #define __SORTUTIL__
    #define SORT_INPUT_TYPE char
    void qsort(int in[],int left,int right);
    void swap();
    void bubbleSort(SORT_INPUT_TYPE in[],int len);
    void selectSort(SORT_INPUT_TYPE in[],int len);
#endif