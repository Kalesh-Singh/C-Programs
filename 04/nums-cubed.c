/* C Program to find cube of 10 numbers */

#include <stdio.h>

int main()
{
    int num, cube;
    char ch;                    // to control iterations

    do
    {
        printf("Enter a number:\t");
        scanf("%d", &num);

        cube = num * num * num;

        printf("The cube of %d is %d\n\n", num , cube);

        printf("Do you want to continue? y/n\t");
        scanf("\n%c", &ch);
    } while (ch == 'y' || ch == 'Y');

    return 0;
}    
