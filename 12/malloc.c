#include <stdlib.h>
#include <stdio.h>

int main()
{
    int* iptr;
    float* fptr;
    char* cptr;

    // malloc returns a void pointer to the memory it allocated
    // so wwe have to type cast it.

    iptr = (int*) malloc(1 * sizeof(int));
    fptr = (float*) malloc(1 * sizeof(float));
    cptr = (char*) malloc(1 * sizeof(char));

    *iptr = 5;
    *fptr = 7.56f;
    *cptr = 'A';

    printf("%d\n%f\n%c\n", *iptr, *fptr, *cptr);

    return 0;
}    