#include <stdio.h>

int main()
{
    char str1[80];
    char str2[80];
    int p;

    puts("Enter first string");
    gets(str1);

    puts("Enter second string");
    gets(str2);

    p = strcmp(str1, str2);

    if (p == 0)
        puts("Both strings are the same");
    else
        puts("The 2 strings are not the same");

    return 0;
}