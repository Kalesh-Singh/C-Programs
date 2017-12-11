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

    printf("%d is the larger\n\n", x > y ? x : y);

    return 0;
}    
