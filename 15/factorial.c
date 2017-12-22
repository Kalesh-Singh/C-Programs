#include <stdio.h>

long int factorial(long int);		// prototype

int main()
{
    long int num;
    long int fact;

    printf("Enter any positive integer:\t");
    scanf("%ld", &num);

    fact = factorial(num);
  
    printf("%ld! = %ld\n", num, fact);

    return 0;
}

long int factorial(long int x)
{
    long int f;

    if (x > 1)
        f = x * factorial(x - 1);		// Recursive call
    else
        return 1;

    return f;
}