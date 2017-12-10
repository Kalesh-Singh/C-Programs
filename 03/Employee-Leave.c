/* Importance of Logical OR operator */

#include <stdio.h>

int main()
{
    char sex;

    printf("Enter the gender of the employee:\t\t");
    scanf("%c", &sex);

    if (sex == 'M' || sex == 'm')
    {
        printf("Employee is eligibly for Paternity leave\n");
    }
    else
    {
        printf("Employee is eleigible for Maternal leave\n");
    }

    return 0;
}    
