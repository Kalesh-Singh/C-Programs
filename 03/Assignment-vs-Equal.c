/* Difference between assignment and equal operator */

#include <stdio.h>

int main()
{
    int x = 5;

    int y = 10;

    if (x = y)
        printf("Both x and y are same\n\n");
    else
        printf("x and y are different\n\n");

    return 0;
}
