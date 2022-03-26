#include <stdio.h>

#define MAX_SIZE 100 // max값 정의 

float sum(float [], int); // sum 함수 정의
float input[MAX_SIZE], answer; // 실수형 변수 선언 
int i; // 정수형 변수 선언
void main(void)
{
    for(i=0; i < MAX_SIZE; i++) // max값 만큼 반복
        input[i] = i; // i값 넣음 
        
    printf("[----- [장원도] [2018038099] -----]\n\n");
    /* for checking call by reference */
    printf("address of input = %p\n", input); // input 주소 출력 

    answer = sum(input, MAX_SIZE); // sum 함수 호출 
    printf("The sum is: %f\n", answer); // answer 출력
}
float sum(float list[], int n) // sum 함수 list에 input 주소, n에 max 값 
{
    printf("value of list = %p\n", list); // list 값 출력
    printf("address of list = %p\n\n", &list); // list 주소 출력

    int i; // 정수형 변수 선언
    float tempsum = 0; // 실수형 변수 선언 
    for(i = 0; i < n; i++) // max값 만큼 반복
        tempsum += list[i]; // max값 만큼 더함 
    return tempsum;  // 더한값 리턴 
}
