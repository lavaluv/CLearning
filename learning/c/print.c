#include <stdio.h>
/*
    printf输出格式：
    \n换行
    \t制表
    \b回退
    \"双引号
    \\反斜杠
    若出现不在转转义符表中的符号，如\c，则报错"未知转义序列"
*/
int main(){
    printf("换行符\n");
    printf("制表符\t");
    printf("回退符\b\n");
    printf("%3d %6d\n",3,4);
    printf("%3.0f %6.3f\n",3.1,4.1234);
    printf("%o %x\n",013,0xaf);
}