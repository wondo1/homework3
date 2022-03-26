#include <stdio.h>

void print1 (int *ptr, int rows); // print1 �Լ� ���� 

int main()
{
    int one[] = {0, 1, 2, 3, 4}; // one �迭�� 5�� ���� �����

    printf("[----- [�����] [2018038099] -----]\n\n");
    printf("one = %p\n", one); // one ���
    printf("&one = %p\n", &one); // one �ּ� ���
    printf("&one[0] = %p\n", &one[0]); // one 0 �ּ� ���
    printf("\n"); 

    print1(&one[0], 5); // print1 ȣ�� 

    return 0;
}

void print1 (int *ptr, int rows) // print1 �Լ��� one[0]�� �ּҰ�, rows �� 5
{/* print out a one-dimensional array using a pointer */

    int i; // ������ ���� ����
    printf ("Address \t Contents\n"); 
    for (i = 0; i < rows; i++) // rows �� ��ŭ �ݺ� 
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // �� 0~4 ���� �ּ�, �� ��� 
    printf("\n");
}
