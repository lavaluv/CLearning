#include <stdio.h>
/*
    printf�����ʽ��
    \n����
    \t�Ʊ�
    \b����
    \"˫����
    \\��б��
    �����ֲ���תת������еķ��ţ���\c���򱨴�"δ֪ת������"
*/
int main(){
    printf("���з�\n");
    printf("�Ʊ��\t");
    printf("���˷�\b\n");
    printf("%3d %6d\n",3,4);
    printf("%3.0f %6.3f\n",3.1,4.1234);
    printf("%o %x\n",013,0xaf);
}