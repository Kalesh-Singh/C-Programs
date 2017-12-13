/* A simple program to understand pointer basics */

#include <stdio.h>

int main()
{
    int x;
    float y;
    char ch;
    int* ptr_x;
    float* ptr_y;
    char* ptr_ch;

    x = 5;
    y = 3.14;
    ch = 'C';

    ptr_x = &x;
    ptr_y = &y;
    ptr_ch = &ch;

    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("ch = %c\n", ch);

    change(x, y, ch);

    printf("x = %d\n", x);
    printf("y = %f\n", y);
    printf("ch = %c\n", ch);

    return 0;
}

change(int p, float q, char r)
{
    p = 10;
    q = 9.8;
    r = '$';
}


