#include <stdio.h>

#define PI 3.14				// Macro definition
#define CIRCLEAREA(x) (PI * x * x)	// Nested Macro with parameter

float circle_area(int);
float circle_circum(int);
float shpere_surface_area(int);
float sphere_volume(int);
float cylinder_surface_area(int, int);
float cylinder_volume(int, int);

int main()
{
    int r;				// radius of circle, sphere and cylinder
    int h; 				// height of cylinder
    float ac;				// area of circle
    float cc;				// circumference of circle
    float sas;				// surface area of sphere
    float vs;				// volume of sphere
    float sac;				// surface area of cylinder
    float vc;				// volume of cylinder;

    printf("Enter radius:\t");
    scanf("%d", &r);
    printf("Enter height of the cylinder:\t");
    scanf("%d", &h);
    
    ac = CIRCLEAREA(r);
    cc = circle_circum(r);
    sas = shpere_surface_area(r);
    vs = sphere_volume(r);
    sac = cylinder_surface_area(r, h);
    vc = cylinder_volume(r, h);
 
    printf("Area of circle = %f\n", ac);
    printf("Circumference of circle = %f\n", cc);
    printf("Surface area of sphere = %f\n", sas);
    printf("Volume of sphere = %f\n", vs);
    printf("Surface area of cylinder = %f\n", sac);
    printf("Volmue of cylinder = %f\n", vc);

    return 0;
}

float circle_area(int r)
{
    float area;
    area = PI * r * r;
    return area;
}

float circle_circum(int r)
{
    float cf;
    cf = 2 * PI * r;
    return cf;
}

float shpere_surface_area(int r)
{
    float ssa;
    ssa = 4 * 3.14 * r * r;
    return ssa;
}

float sphere_volume(int r)		// C++ style of declaring function parameters (USED)
{
    float sv;
    sv = 4/3 * PI * r * r *r;
    return sv;
}

float cylinder_surface_area(r, h)   	// Notice: K&R Style of declaring function parameters
int r, h;				// (DEPRECATED)
{
    float a;
    a = 2 * PI * r * (r + h);
    return a;
}

float cylinder_volume(int r, int h)
{
    float volume;
    volume = PI * r * r * h;
    return volume;
}