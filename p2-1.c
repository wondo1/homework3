#include <stdio.h>

#define MAX_SIZE 100 // max�� ���� 

float sum(float [], int); // sum �Լ� ����
float input[MAX_SIZE], answer; // �Ǽ��� ���� ���� 
int i; // ������ ���� ����
void main(void)
{
    for(i=0; i < MAX_SIZE; i++) // max�� ��ŭ �ݺ�
        input[i] = i; // i�� ���� 
        
    printf("[----- [�����] [2018038099] -----]\n\n");
    /* for checking call by reference */
    printf("address of input = %p\n", input); // input �ּ� ��� 

    answer = sum(input, MAX_SIZE); // sum �Լ� ȣ�� 
    printf("The sum is: %f\n", answer); // answer ���
}
float sum(float list[], int n) // sum �Լ� list�� input �ּ�, n�� max �� 
{
    printf("value of list = %p\n", list); // list �� ���
    printf("address of list = %p\n\n", &list); // list �ּ� ���

    int i; // ������ ���� ����
    float tempsum = 0; // �Ǽ��� ���� ���� 
    for(i = 0; i < n; i++) // max�� ��ŭ �ݺ�
        tempsum += list[i]; // max�� ��ŭ ���� 
    return tempsum;  // ���Ѱ� ���� 
}
