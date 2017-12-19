#include <stdlib.h>
#include <stdio.h>

int main()
{
    int* ptr;
    int* temp;

    int num;

    printf("How many integers do you want to enter:\t\t");
    scanf("%d", &num);

    ptr = (int*) malloc(num * sizeof(int));

    temp = ptr;

    for (int i = 1; i <= num; i++)
    { 
        printf("Enter number:\t");
        scanf("%d", ptr);
        ptr++;
    }

    ptr = temp;
 
    printf("The numbers you entered are: [");
   
    for (int i = 1; i <= num; i++)
    {
        if (i != num)
            printf("%d, ", *ptr);
        else
            printf("%d", *ptr);
        ptr++;
    }

    printf("]\n");

    return 0;
}