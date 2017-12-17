#include <stdio.h>

typedef struct
{
    int empid;
    char name[40];
    float salary;
    char gender;
    char address[100];
} employee;

int main()
{
    employee emp[3];

    for (int i = 0; i <= 2; i++)
    {
        printf("Enter employee ID:\t");
        scanf("%d", &emp[i].empid);

        fflush(stdin);
        
        printf("Enter employee name:\t");
        gets(emp[i].name);

        printf("Enter employee salary:\t");
        scanf("%f", &emp[i].salary);

        fflush(stdin);

        printf("Enter employee gender:\t");
        scanf("%c", &emp[i].gender);

        fflush(stdin);

        printf("Enter employee address:\t");
        gets(emp[i].address);
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i <= 2; i++)
    {
        printf("%d\t%s\t%f\t%c\t%s\n", emp[i].empid, emp[i].name, emp[i].salary, emp[i].gender, emp[i].address);
    }
   
    return 0;
}