/* Program that prints the larger of 2 integers */

#include <stdio.h>

int main()
{
    int x, y;
    int max;

    printf("Enter 1st Number:\t");
    scanf("%d", &x);

    printf("Enter 2nd Number:\t");
    scanf("%d", &y);

    max = x > y ? x : y;

    printf("%d is the larger\n\n", max);

    return 0;
}    
