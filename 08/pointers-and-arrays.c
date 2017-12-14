#include <stdio.h>

int main()
{
    int marks[5] = {67, 68, 73, 69, 70};			// Initializing an array
    int i, total = 0;
    int* ptr;
    
    ptr = &marks[0];

    for (i = 1; i <= 5; i++)
    {
        total = total + *ptr;
        ptr += 1;
    }

    printf("Total = %d\n", total);

    return 0;
}