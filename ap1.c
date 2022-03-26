#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5]; // 정수 5개 저장할 수 있는 리스트형 배열  
    int *plist[5] = {NULL,}; // 정수에 대한 5개 포인터, NULL로 초기화 

    plist[0] = (int *)malloc(sizeof(int)); // plist 0에 힙영역에서 4바이트 메모리 주소 넘겨줌, 동적메모리할당
    
    list[0] = 1; // 리스트 0에 1 값
    list[1] = 100; // 리스트 1에 100 값 

    *plist[0] = 200; // plist 0번이 가르키고 있는 곳에 200 값 
    printf("[----- [장원도] [2018038099] -----]\n\n");
    printf("value of list[0] = %d\n", list[0]); // list 0 값 출력
    printf("address of list[0] = %p\n", &list[0]); // list 0 주소 출력
    printf("value of list = %p\n", list); // list 값 출력
    printf("address of list (&list) = %p\n", &list); // list 주소 출력

    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]); // list 1 값 출력
    printf("address of list[1] = %p\n", &list[1]); // list 1 주소 출력
    printf("value of *(list+1) = %d\n", *(list + 1)); // list+1이 가르키는 값 출력
    printf("address of list+1 = %p\n", list+1); // list+1 주소 출력

    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]); // plist 0번이 가르키는 값 출력
    printf("&plist[0] = %p\n", &plist[0]); // plist 0번 주소 출력
    printf("&plist = %p\n", &plist); // plist 주소 출력
    printf("plist = %p\n", plist); // plist 출력
    printf("plist[0] = %p\n", plist[0]); // plist 0번  출력
    printf("plist[1] = %p\n", plist[1]); // plist 1번  출력
    printf("plist[2] = %p\n", plist[2]); // plist 2번  출력
    printf("plist[3] = %p\n", plist[3]); // plist 3번  출력
    printf("plist[4] = %p\n", plist[4]); // plist 4번  출력

    free(plist[0]); // plist[0] 메모리 해제 
}