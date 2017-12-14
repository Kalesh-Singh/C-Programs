#include <stdio.h>

int total_marks(int*);

int main()
{
    int marks[5] = {67, 68, 73, 69, 70};
    int i, total;
    
    total = total_marks(marks);		// NOTE: The name of an array stores the base address of that array
 
    printf("Total = %d\n", total);

    return 0;
}

int total_marks(int* ptr)
{
    int total = 0;
    int i;

    for (i = 1; i <= 5; i++)
    {
        total += *ptr;
        ptr++;
    }
    
    return total;     

}