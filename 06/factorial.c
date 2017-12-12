/* Program that determines the factorial of a number */

#include <stdio.h>

int factorial(int);

int main()
{
    int num;
    int fact;

    printf("Enter a positive number:\t");
    scanf("%d", &num);

    fact = factorial(num);

    printf("%d! = %d\n", num, fact);

    return 0;
}

int factorial(int num)
{
    int result = 1;

    for (int i = num; i >= 1; i--)
    {
        result *= i;
    }

    return result;
}
