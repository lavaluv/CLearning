#include <stdio.h>
int main(int argc, char const *argv[])
{
    int A = 0;
    float CAP = 0;
    float CAV = 0;
    printf("input A,CAP,CAV:\n");
    scanf("%d,%f,%f",&A,&CAP,&CAV);
    printf("PA is:%f",A*(1-CAP)+A*CAP*(CAV+1.0));
    return 0;
}
