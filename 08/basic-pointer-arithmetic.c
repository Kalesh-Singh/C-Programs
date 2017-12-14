/* Program to illustrate the basics of pointer arithmethic */

#include <stdio.h>

int main()
{
    int x, *ptr_x;
    float y, *ptr_y;
    char ch, *ptr_ch;

    x = 5;
    y = 33.14f;
    ch = 'A';

    ptr_x = &x;
    ptr_y = &y;
    ptr_ch = &ch;

    printf("Address of x = %p\n", &x);
    printf("Address of x = %p\n\n", ptr_x);
    printf("Address of y = %p\n", &y);
    printf("Address of y = %p\n\n", ptr_y);
    printf("Address of ch = %p\n", &ch);
    printf("Address of ch = %p\n\n", ptr_ch);

    ptr_x += 1;
    ptr_y += 1;
    ptr_ch += 1;

    printf("Address of x = %p\n\n", ptr_x);
    printf("Address of y = %p\n\n", ptr_y);
    printf("Address of ch = %p\n\n", ptr_ch);

    return 0;
}
