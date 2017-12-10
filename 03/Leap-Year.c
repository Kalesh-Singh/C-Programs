/* Program that cheacks whether a year is a leap year or not.
 * 1. Year is divisible by 4 and not divisible by 100
 * 2. If year is divisible by 4 and 100, then it must be divisible by 400 as well.
*/

#include <stdio.h>

int main()
{
    int year;

    printf("Enter any year:\t");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 != 0)
        {
            printf("The year %d is a leap year\n\n", year);
        }
        else
        {
            if (year % 400 == 0)
            {
                printf("The year %d is a leap year\n\n", year);
            }
            else
            {
                printf("The year %d is not a leap year\n\n", year);
            }
        }
    }
    else
    {
        printf("The year %d is not a leap year\n\n", year);
    }

    return 0;
}

