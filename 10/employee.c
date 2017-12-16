#include <stdio.h>
#include <string.h>

int main()
{
    /*
    struct employee
    {
        long emp_id;
        char emp_name[25];
        char emp_surname[25];
        char gender;
        long ssn;
        char marital_status;
        int date;
        int month;
        int year;
    };
    
    typedef struct employee employee;
    */

    /* typedef is used so that instead of having to type "struct employee e1"
       we can simply type "employee e1" 
    */

    // typedef can also be combined with the structure definition and is considered good practice.

    
    typedef struct
    {
        long emp_id;
        char emp_name[25];
        char emp_surname[25];
        char gender;
        long ssn;
        char marital_status;
        int date;
        int month;
        int year;
    } employee;

    employee e1;
 
    strcpy(e1.emp_name, "Kalesh");
    strcpy(e1.emp_surname, "Singh");

    printf("The first name of employee e1 is %s\n", e1.emp_name);
    printf("The surname of employee e1 is %s\n", e1.emp_surname);

    return 0;
}