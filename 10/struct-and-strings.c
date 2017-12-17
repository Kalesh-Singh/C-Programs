#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int rollno;
    float marks;
    char grade;
} student;

int main()
{
    student s1, s2;

    strcpy(s2.name, "Johanan Dolphin");
    s2.rollno = 578;
    s2.marks = 43.21;
    s2.grade = 'F';

    student s3 = {"Andy Sattan", 789, 78.78, 'B'};

    puts("Enter the name of the student:");
    gets(s1.name);

    printf("Enter roll number:\t");
    scanf("%d", &s1.rollno);

    printf("Enter marks:\t");
    scanf("%f", &s1.marks);

    fflush(stdin);

    printf("Enter grade:\t");
    scanf("%c", &s1.grade);

    printf("\n\n");

    printf("Name:        ");
    printf("%s\n", s1.name);
    printf("Roll Number: ");
    printf("%d\n", s1.rollno);
    printf("Marks:       ");
    printf("%0.2f\n", s1.marks);
    printf("Grade:       ");
    printf("%c\n", s1.grade);

    return 0;
}