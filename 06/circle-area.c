/* Program to find the area of a circle */

#include <stdio.h>

float circle_area(int radius);

int main()
{
    int radius;
    float area;

    printf("Enter radius of the circle:\t");
    scanf("%d", &radius);

    area = circle_area(radius);

    printf("Area of circle = %f\n", area);
    
    return 0;
}

float circle_area(int radius)
{
    float area = 3.14 * radius * radius;

    return area;
}
