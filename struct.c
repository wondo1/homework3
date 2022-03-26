#include <stdio.h>

struct student1 { // student1 구조체 선언 
    char lastName; // 문자형 변수 선언
    int studentId; // 정수형 변수 선언
    char grade; // 문자형 변수 선언 
};

typedef struct { //typedef 사용한 student2 구조체 선언 
    char lastName; // 문자형 변수 선언 
    int studentId; // 정수형 변수 선언
    char grade; // 문자형 변수 선언 
} student2;

int main() {

    struct student1 st1 = {'A', 100, 'A'}; // st1 구조체 변수에 값 저장

    printf("[----- [장원도] [2018038099] -----]\n\n");
    printf("st1.lastName = %c\n", st1.lastName); // st1.lastName 출력
    printf("st1.studentId = %d\n", st1.studentId); // st1.studentId 출력
    printf("st1.grade = %c\n", st1.grade); // st1.grade 출력 


    student2 st2 = {'B', 200, 'B'}; // st2 구조체 변수에 값 저장

    printf("\nst2.lastName = %c\n", st2.lastName); // st2.lastName 출력
    printf("st2.studentId = %d\n", st2.studentId); // st2.studentId 출력
    printf("st2.grade = %c\n", st2.grade); // st2.grade 출력

    student2 st3; // st3 변수 선언 

    st3 = st2; // st2값 st3에 저장

    printf("\nst3.lastName = %c\n", st3.lastName); // st3.lastName 출력
    printf("st3.studentId = %d\n", st3.studentId); // st3.studentId 출력
    printf("st3.grade = %c\n", st3.grade); // st3.grade 출력

    /* equality test */
    
   /*  if(st3 == st2) //not working // st3 와 st2 동등성 검사, 비교 불가함
   // 비교 하려면 st2와 st3의 lastName, studentId, grade를 각각 하나씩 비교해야함
        printf("equal\n");
    else
        printf("not equal\n");
    */
    return 0;

}