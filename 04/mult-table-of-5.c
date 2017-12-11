/* Program to print the multiplication table of 5 */
 
#include <stdio.h>

int main()
{
    int j;

    for (j = 1; j <= 50; j++)
    {
        if (j % 5 != 0)
            continue;
        printf("%2d\n", j);
    }
    
    return 0;
}
