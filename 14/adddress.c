#include <stdio.h>

void call();

int p;

int main()
{
    int x;
    static int y = 7.8f;
    int num[1000];
    float number[1000];

    printf("Address of int x = %p\n", &x);
    printf("Address of static int y = %p\n", &y);
    printf("Address of int num[1000] = %p\n", num);
    printf("Address of float number[1000] = %p\n", number);

    call();

    return 0;
}

void call()
{
    static int i;
    int z;
    
    printf("\nAddresses of variables in call function\n");
    printf("Address of static int i = %p\n", &i);
    printf("Address of int z = %p\n", &z);
}