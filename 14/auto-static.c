#include <stdio.h>

void callme(void);

int main()
{
    int count;

    for (count = 1; count <= 3; count++)
        callme();
   
    return 0;
}

void callme(void)
{
    int x = 0;			// Auto storage class 
    static int y = 0;		// Note : static variables can only be inititalized once
		
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    x++;
    y++;
}