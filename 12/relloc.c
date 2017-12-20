#include <stdlib.h>
#include <stdio.h>

int main()
{
    int count = 0;
    int input, n;
    int* numbers = NULL;
    int* more_numbers = NULL;

    do
    {
        printf("Enter an integer value (0 to end): \t");
        scanf("%d", &input);
        count++;
        more_numbers = (int*) realloc(numbers, count * sizeof(int));
        if (more_numbers != NULL)
        {
            numbers = more_numbers;
            numbers[count-1] = input;
        }
        else
        {
            free(numbers);
            puts("Error (re)allocating memory.");
            exit(1);
        } 
    } while (input != 0);
    
    printf("Numbers entered: [");
   
    for (n = 0; n < count - 1; n++)
    {
        if (n != count - 2)			// Notice "count - 2" becasue we do not want to print 0 
            printf("%d, ", numbers[n]);
        else
            printf("%d]", numbers[n]); 			// Note that we do not print the last number or 0 which is used to signal the end.
    }

    free(numbers);
 
    return 0;
}        
        