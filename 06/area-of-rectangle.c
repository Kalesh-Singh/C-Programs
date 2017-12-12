/* Program to find the area of a rectangle */

#include <stdio.h>

int rec_area(int length, int width);

int main()
{
    int length, width;
    int area;

    printf("Enter length of rectangle:\t");
    scanf("%d", &length);

    printf("Enter width of rectangle:\t");
    scanf("%d", &width);

    area = rec_area(length, width);

    printf("Area of rectangle = %d\n", area);

    return 0;
}

int rec_area(int length, int width)
{
    int area = length * width;

    return area;
}
