/* C program to observe the behavior of local and global variables */

#include <stdio.h>

int p = 20;

void call(void);

int main()
{
    int x = 5;
    
    call();
   
    printf("In main function\nx = %d\n", x);
    printf("After call function\np = %d\n", p);

    return 0;
}

void call(void)
{
    int x = 10;
    printf("In call function\nx = %d\n", x);
    printf("In call function\np = %d\n", p);
    p = 30;
}
