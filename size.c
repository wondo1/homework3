#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x; // ������ ���������� ���� 

    printf("[----- [�����] [2018038099] -----]\n\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); // x ũ�� ���
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // ������x ũ�� ��� 
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // ����������x ũ�� ��� ������ 
}
