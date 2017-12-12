/* Program determindes the max of 2 integers */

#include <stdio.h>

int max_int(int, int);              // Prototype of the function

int main()
{
    int x, y;
    int max;

    printf("Enter 1st number:\t");
    scanf("%d", &x);
    
    printf("Enter 2nd number:\t");
    scanf("%d", &y);

    max = max_int(x, y);
    
    printf("Largest number is %d\n", max);
    
    return 0;
}

int max_int(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
