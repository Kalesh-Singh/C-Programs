#include <stdio.h>

typedef struct
{
    int rollno;
    float marks;
    char grade;
} student;

int main()
{
    student s1, s2;

    student s3 = {103, 84.32, 'A'};		// Structure Initialization
    
    s1.rollno = 101;				// Structure Assignment
    s1.marks = 76.89;
    s1.grade = 'A';

    printf("Enter Roll No:\t");
    scanf("%d", &s2.rollno);
    printf("Enter Marks:\t");
    scanf("%f", &s2.marks);
    fflush(stdin);
    printf("Enter Grade:\t");
    scanf("%c", &s2.grade);

    printf("Roll No. = %d\nMarks = %0.2f\nGrade = %c\n\n", s1.rollno, s1.marks, s1.grade);
    printf("Roll No. = %d\nMarks = %0.2f\nGrade = %c\n\n", s2.rollno, s2.marks, s2.grade);
    printf("Roll No. = %d\nMarks = %0.2f\nGrade = %c\n\n", s3.rollno, s3.marks, s3.grade);

    return 0;
}