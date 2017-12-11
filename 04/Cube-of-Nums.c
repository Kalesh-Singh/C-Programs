/* C Program to find the cube of 10 numbers */

#include <stdio.h>

int main()
{
    int num, cube;
    int i;                  // counter variable for while loop

    i = 1;

    while (i <= 10)         // Condition
    {
        printf("Enter number:\t\t");
        scanf("%d", &num);

        cube = num * num * num;

        printf("Cube of %d is %d\n\n", num, cube);

        i += 1;             // counter increment
    }

    return 0;
}
