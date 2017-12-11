/* Program to print multiplication tables of numbers 1 to 10 */

#include <stdio.h>

int main()
{
    for (int i = 1; i <=10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%4d\t", i * j);
        }
        printf("\n");
    }
    
    return 0;
}
