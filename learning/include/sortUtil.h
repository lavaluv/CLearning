#ifndef __SORTUTIL__
    #define __SORTUTIL__
    #define SORT_INPUT_TYPE int
    void qsort(SORT_INPUT_TYPE in[],int left,int right);
    void bubbleSort(SORT_INPUT_TYPE in[],int len);
    void selectSort(SORT_INPUT_TYPE in[],int len);
#endif