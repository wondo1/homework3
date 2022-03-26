#include<stdio.h>
#include<stdlib.h>

void main()
{
    int **x; // 정수형 이중포인터 선언 

    printf("[----- [장원도] [2018038099] -----]\n\n");
    printf("sizeof(x) = %lu\n", sizeof(x)); // x 크기 출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // 포인터x 크기 출력 
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // 이중포인터x 크기 출력 정수형 
}
