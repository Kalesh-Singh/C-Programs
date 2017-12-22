/* Write a C Program to interchange the contents 
   of two variables without using a third vaiable. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 4;
    int y = 7;

    printf("Before Interchanging\n");
    printf("x = %d\ny = %d\n\n", x, y);

    x = x + y;		// x = 11
    y = x - y;		// y = 4
    x = x - y;		// x = 7;

    printf("After Interchanging\n");
    printf("x = %d\ny = %d\n", x, y);

    return 0;
}