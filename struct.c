#include <stdio.h>

struct student1 { // student1 ����ü ���� 
    char lastName; // ������ ���� ����
    int studentId; // ������ ���� ����
    char grade; // ������ ���� ���� 
};

typedef struct { //typedef ����� student2 ����ü ���� 
    char lastName; // ������ ���� ���� 
    int studentId; // ������ ���� ����
    char grade; // ������ ���� ���� 
} student2;

int main() {

    struct student1 st1 = {'A', 100, 'A'}; // st1 ����ü ������ �� ����

    printf("[----- [�����] [2018038099] -----]\n\n");
    printf("st1.lastName = %c\n", st1.lastName); // st1.lastName ���
    printf("st1.studentId = %d\n", st1.studentId); // st1.studentId ���
    printf("st1.grade = %c\n", st1.grade); // st1.grade ��� 


    student2 st2 = {'B', 200, 'B'}; // st2 ����ü ������ �� ����

    printf("\nst2.lastName = %c\n", st2.lastName); // st2.lastName ���
    printf("st2.studentId = %d\n", st2.studentId); // st2.studentId ���
    printf("st2.grade = %c\n", st2.grade); // st2.grade ���

    student2 st3; // st3 ���� ���� 

    st3 = st2; // st2�� st3�� ����

    printf("\nst3.lastName = %c\n", st3.lastName); // st3.lastName ���
    printf("st3.studentId = %d\n", st3.studentId); // st3.studentId ���
    printf("st3.grade = %c\n", st3.grade); // st3.grade ���

    /* equality test */
    
   /*  if(st3 == st2) //not working // st3 �� st2 ��� �˻�, �� �Ұ���
   // �� �Ϸ��� st2�� st3�� lastName, studentId, grade�� ���� �ϳ��� ���ؾ���
        printf("equal\n");
    else
        printf("not equal\n");
    */
    return 0;

}