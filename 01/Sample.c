#include <stdio.h>							// file for printf() and scanf() functions
int main()
{
	int x, y, sum;							// declaration of variables
	printf("Welcome to C Programing\n");
	printf("Enter a number:\t\t");
	scanf("%d", &x);
	printf("Enter another number:\t");	
	scanf("%d", &y);
	sum = x + y;
	printf("Sum of %d and %d is %d\n", x , y, sum);
	return 0;
}
