#include <stdio.h>

void print1 (int *ptr, int rows); // print1 함수 정의 

int main()
{
    int one[] = {0, 1, 2, 3, 4}; // one 배열에 5개 정수 저장됨

    printf("[----- [장원도] [2018038099] -----]\n\n");
    printf("one = %p\n", one); // one 출력
    printf("&one = %p\n", &one); // one 주소 출력
    printf("&one[0] = %p\n", &one[0]); // one 0 주소 출력
    printf("\n"); 

    print1(&one[0], 5); // print1 호출 

    return 0;
}

void print1 (int *ptr, int rows) // print1 함수에 one[0]의 주소값, rows 값 5
{/* print out a one-dimensional array using a pointer */

    int i; // 정수형 변수 선언
    printf ("Address \t Contents\n"); 
    for (i = 0; i < rows; i++) // rows 값 만큼 반복 
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); // 각 0~4 까지 주소, 값 출력 
    printf("\n");
}
