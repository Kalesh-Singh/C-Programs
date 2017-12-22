#include <stdio.h>

void tower_of_hanoi(int, char, char, char);

int main()
{
    int num;
    char source, helper, destination;
    printf("Enter the number of disks:\t");
    scanf("%d", &num);
 
    fflush(stdin);

    printf("Enter the source:\t");
    scanf("%c", &source);

    fflush(stdin);

    printf("Enter the destination:\t");
    scanf("%c", &destination);

    fflush(stdin);

    printf("Enter helper:\t");
    scanf("%c", &helper);

    tower_of_hanoi(num, source, destination, helper);

    return 0;
}

void tower_of_hanoi(int n, char s, char d, char h)
{
    if (n == 0)		// Base case
    {
        return;
    }
    else
    {
        /* Recursive Case */

        // 1. Move n-1 disks form A to B
        tower_of_hanoi(n - 1, s, h, d);

        // 2. Move nth disk form A to C
        printf("Move disk %d  form %c to %c\n", n, s, d);

        // 3. Move n-1 disks form B to C
        tower_of_hanoi(n - 1, h, d, s);

        return;
    }
}

