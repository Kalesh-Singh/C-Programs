#include <stdio.h>

/* NOTE: The purpose of extern storage class is to extend 
 * the scope of a global variable beyond its normal boundaries.
 * It can be used to extend the scope of global variables even across files,
 * unless the variable is also declared as static.
 */

int x;

void callme();
void check();

int main()
{
    printf("Inside main()\n");
    printf("x = %d\n", x);
    callme();
    printf("Again inside main()\n");
    check();
    printf("Leaving main()\n");
   
    return 0;
}

extern int y;  	// This extends the scope of y so that it is also available to callme()

void callme()
{
    printf("Inside callme()\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}

int y;		// NOTE: Because y is declared here it is only available to check() 
                // not to any function before its declaration

void check()
{
    printf("Inside check()\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
}
