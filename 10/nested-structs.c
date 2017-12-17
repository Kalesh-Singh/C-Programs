#include <stdio.h>

typedef struct
{
    int day;
    int month;
    int year;
} date;

struct student
{
    int rollno;
    double marks;
    char grade;
    date dob; 
};

typedef struct student student;

int main()
{
    student s1;
    
    s1.rollno = 56;
    s1.marks = 78.95;
    s1.grade = 'A';
    s1.dob.day = 10;
    s1.dob.month = 11;
    s1.dob.year = 1995;

    printf("%d\t%f\t%c\t%d-%d-%d\n", s1.rollno, s1.marks, s1.grade, s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}