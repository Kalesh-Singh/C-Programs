/* Program to find whether a number is prime or not */

#include <stdio.h>

int main()
{
    int num;
    int i = 2;

    printf("Enter a number:\t");
    scanf("%d", &num);

    while (i <  num)
    {
        if (num % i == 0)
        {
            printf("The number is not prime\n");
            break;
        }
        i++;
    }

    if (i == num)
        printf("The number is prime\n");
    
    return 0;
}
