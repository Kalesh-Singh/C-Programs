/* Progarm that uses pointers and calculates the area and perimeter of a rectangle and circle */

#include <stdio.h>

void rec_circle(int, int, int, int*, int*, float*, float*);

int main()
{
    int length, breadth, radius;
    int rec_area, rec_peri;
    float circle_area, circle_circum;

    printf("Enter length of rectangle:\t");
    scanf("%d", &length);

    printf("Enter breadth of rectangle:\t");
    scanf("%d", &breadth);

    printf("Enter radius of a circle:\t");
    scanf("%d", &radius);

    rec_circle(length, breadth, radius, &rec_area, &rec_peri, &circle_area, &circle_circum);

    printf("\n\nArea of rectangle = %d\n\n", rec_area);
    printf("Perimeter of rectangle = %d\n\n", rec_peri);
    printf("Area of circle = %0.2f\n\n", circle_area);
    printf("Circumference of cirlce = %0.2f\n\n", circle_circum);

    return 0;
}

void rec_circle(int l, int b, int r, int* ptr_ra, int* ptr_rp, float* ptr_ca, float* ptr_cc)
{
    *ptr_ra = l * b;
    *ptr_rp = 2 * (l + b);
    *ptr_ca = 3.14 * r * r;
    *ptr_cc = 2 * 3.14 * r;
} 