#include <stdio.h>

struct student { // student ����ü ���� 
    char lastName[13]; /* 13 bytes */ // ������ �迭 ���� ����
    int studentId; /* 4 bytes */ // ������ ���� ����
    short grade; /* 2 bytes */ // ������ ���� ����
};

int main()
{
    struct student pst; // student ����ü pst ���� ����

    printf("[----- [�����] [2018038099] -----]\n\n");
    printf("size of student = %ld\n", sizeof(struct student)); // student ����ü ũ�� ���(�е����� ����� ä�� 16+4+4)
    printf("size of int = %ld\n", sizeof(int)); // int �ڷ��� ũ�� ���
    printf("size of short = %ld\n", sizeof(short)); // short �ڷ��� ũ�� ���

    return 0;
}
