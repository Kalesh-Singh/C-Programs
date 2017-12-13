/* A program that swaps the values of 2 variables in main by using ponters */

#include <stdio.h>

void swap(int*, int*);

int main()
{
    int x;
    int y;

    printf("Enter number:\t");
    scanf("%d", &x);

    printf("Enter number:\t");
    scanf("%d", &y);

    printf("Before swap\nx = %d\ny = %d\n", x, y);

    swap(&x, &y);

    printf("After swap\nx = %d\ny = %d\n", x, y);

    return 0;
}

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}