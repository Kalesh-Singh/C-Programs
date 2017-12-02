/* Prints the calculated sum of 2 integers 

NOTE: Format Specifieers
int		%d
float	%f
char 	%c
*/
#include <stdio.h>
int main()
{
	int x, y, sum;
	x = 5;
	y = 6;
	sum = x + y;
	printf("Sum = %d\n", sum);
	printf("%d + %d = %d\n", x, y, sum);
	return 0;
}
