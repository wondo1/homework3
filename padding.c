#include <stdio.h>

struct student { // student 구조체 선언 
    char lastName[13]; /* 13 bytes */ // 문자형 배열 변수 선언
    int studentId; /* 4 bytes */ // 정수형 변수 선언
    short grade; /* 2 bytes */ // 정수형 변수 선언
};

int main()
{
    struct student pst; // student 구조체 pst 변수 선언

    printf("[----- [장원도] [2018038099] -----]\n\n");
    printf("size of student = %ld\n", sizeof(struct student)); // student 구조체 크기 출력(패딩으로 빈공간 채움 16+4+4)
    printf("size of int = %ld\n", sizeof(int)); // int 자료형 크기 출력
    printf("size of short = %ld\n", sizeof(short)); // short 자료형 크기 출력

    return 0;
}
