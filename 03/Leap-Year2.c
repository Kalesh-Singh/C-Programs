/* A Program to find whether a particular year is a leap year or not */

#include <stdio.h>

int main()
{
    int year;

    printf("Enter any year:\t");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 4 == 0 && year % 100 == 0 && year % 400 == 0))    {
        printf("The year %d is a leap year\n\n", year);
    }
    else
    {
        printf("The year %d is not a leap year\n\n", year);
    }

    return 0;
} 
