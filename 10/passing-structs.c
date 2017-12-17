#include <stdio.h>
#include <string.h>

typedef struct 
{
    int rollno;
    char name[50];
    double marks;   
} student;

void print_info(student);

int main()
{
 
    /*
    // This structure will not be visible to the function print_info

    typedef struct student
    {
        int rollno;
        char name[50];
        double marks;   
    } s1;

    // Notice that the s1 is instaniated when student is defined.

   */

    student s1;

    s1.rollno = 101;
    // s1.name = "Albert";		// Does not work
    strcpy(s1.name, "Albert");
    s1.marks = 85.42;
    
    print_info(s1);

    return 0;
}

void print_info(student s)
{
    printf("%d\t%s\t%lf\n", s.rollno, s.name, s.marks);
}