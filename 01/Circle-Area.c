/* Thsi program calculates the area of a circle with an int radius.*/
#include <stdio.h>
int main()
{	
	int radius;
	float area;
	printf("Enter the radius of the circle: ");
	scanf("%d", &radius);
	area = 3.14 * radius * radius;				// Formula for area of a circle
	printf("Area of the circle = %f\n", area);	
	return 0;
}

