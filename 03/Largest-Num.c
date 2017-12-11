/* Program to print the largest number between 2 integers */

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter 1st Number:\t");
    scanf("%d", &x);

    printf("Enter 2nd Number:\t");
    scanf("%d", &y);

    if (x > y)
        printf("%d is larger\n\n", x);
    else
        printf("%d is larger\n\n", y);

    return 0;
}

