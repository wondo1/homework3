#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5]; // 정수 5개 저장할 수 있는 리스트형 배열
    int *plist[5]; // 정수에 대한 5개 포인터

    list[0] = 10; // 리스트 0에 10 값
    list[1] = 11; // 리스트 1에 11 값

    plist[0] = (int*)malloc(sizeof(int)); // plist 0에 힙영역에서 4바이트 메모리 주소 넘겨줌, 동적메모리할당
    printf("[----- [장원도] [2018038099] -----]\n\n");
    printf("list[0] \t= %d\n", list[0]); // list 0 출력
    printf("address of list \t= %p\n", list); // list 주소 출력
    printf("address of list[0] \t= %p\n", &list[0]); // list 0 주소 출력
    printf("address of list + 0 \t= %p\n", list+0); // list + 0 주소 출력
    printf("address of list + 1 \t= %p\n", list+1); // list + 1 주소 출력
    printf("address of list + 2 \t= %p\n", list+2); // list + 2 주소 출력
    printf("address of list + 3 \t= %p\n", list+3); // list + 3 주소 출력
    printf("address of list + 4 \t= %p\n", list+4); // list + 4 주소 출력
    printf("address of list[4] \t= %p\n", &list[4]); // list 4 주소 출력

    free(plist[0]); // plist[0] 메모리 해제
}