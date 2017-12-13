/* Program to find the marks and percentile of student in 5 subjects */

#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    float percentage;

    for (int i = 0; i <= 4; i++)
    {
        printf("Enter marks subject:\t\t");
        scanf("%d", &marks[i]);
    }

    for(int i = 0; i <= 4; i++)
    {
        total += marks[i];
    }
 
    percentage = total / 5.0;

    printf("\n\nTotal marks = %d", total);
    printf("\n\nPercentile marks = %f\n\n", percentage);

    return 0;
}


    