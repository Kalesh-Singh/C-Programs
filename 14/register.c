#include <stdio.h>

int main()
{
    int p;
    register int i = 5;		// Note: if the register request is not honored the auto sc will be used.
    printf("i = %d\n", i);

    printf("%u\n", &p);
    // printf("%u\n", &i);		// Note: you cannot find the address of a register variable
    return 0;
}