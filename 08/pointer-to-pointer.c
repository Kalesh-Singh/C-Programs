/* Program to explore the basics of pointer to pointer */

#include <stdio.h>

int main()
{
    int x = 5;
    int* y;			// Pointer y to an interger variable
    int** z; 			// Ponter x to an integer pointer
    
    y = &x;
    z = &y;

    printf("x = %d\n", x);
    printf("x = %d\n", *y);
    printf("%p\n", *z);
    printf("x = %d\n", **z);	// Double dereference

    return 0;
}