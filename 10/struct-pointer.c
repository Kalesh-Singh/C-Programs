#include <stdio.h>

typedef struct
{
    int rollno;
    float marks;
    char grade;
} student;

void input(student*, int*);
void output(student*, int*);


int main()
{
    student s1;
    int x;

    input(&s1, &x);
    output(&s1, &x);

    return 0;
}

void input(student* ptr, int* xptr)
{
    printf("Enter number:\t");
    scanf("%d", xptr);

    printf("Enter roll number:\t");
    scanf("%d", &ptr->rollno);

    printf("Enter marks:\t");
    scanf("%f", &ptr->marks);

    fflush(stdin);       // or fseek(stdin, 0, SEEK_END);

    printf("Enter grade:\t");
    scanf("%c", &ptr->grade);
}

void output(student* ptr, int* xptr)
{
    printf("Number = %d\n", *xptr);
    printf("Roll number = %d\n", ptr->rollno);
    printf("Marks = %f\n", (*ptr).marks);        // NOTE: (*ptr)->marks === ptr->marks
    printf("Grade = %c\n", ptr->grade);
}