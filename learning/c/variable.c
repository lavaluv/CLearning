#include <stdlib.h>
#include <limits.h>
#include <float.h>
/*
    �������������У�char,int,float,double
    ���η��У�short,long,unsigned,signed
    ����short int����дΪshort��long int����дΪlong
    char�Ƿ��и�ֵȡ���ھ������ʵ��
*/
//asd
enum myEnum {ONE = 1, TWO, THREE};
typedef enum myEnum e;
int main(int argc, char *argv[]){
    printf("The number of bits in a byte %d\n", CHAR_BIT);

    printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
    printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
    printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

    printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
    printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 
    printf("The maximum value of UNSIGNED SHORT = %d\n", USHRT_MAX); 

    printf("The minimum value of INT = %d\n", INT_MIN);
    printf("The maximum value of INT = %d\n", INT_MAX);
    printf("The maximum value of UNSIGNED INT = %ld\n", UINT_MAX); 

    printf("The minimum value of CHAR = %d\n", CHAR_MIN);
    printf("The maximum value of CHAR = %d\n", CHAR_MAX);

    printf("The minimum value of LONG = %ld\n", LONG_MIN);
    printf("The maximum value of LONG = %ld\n", LONG_MAX);
    printf("The maximum value of UNSIGNED LONE = %ld\n", ULONG_MAX); 

    printf("The minimum value of LONG LONG = %ld\n", LLONG_MIN);
    printf("The maximum value of LONG LONG = %ld\n", LLONG_MAX);
    printf("The maximum value of UNSIGNED LONE LONG = %ld\n", ULLONG_MAX); 

    printf("The minimum value of FLOAT = %f\n", FLT_MIN);
    printf("The maximum value of FLOAT = %f\n", FLT_MAX);

    printf("The minimum value of DOUBLE = %lf\n", DBL_MIN);
    printf("The maximum value of DOUBLE = %lf\n", DBL_MAX);

    printf("myEnum is %d,%d,%d",ONE,TWO,THREE);
}