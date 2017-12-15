#include <stdio.h>
#include <string.h>

int main()
{
    char str1[80];
    char str2[80];

    puts("Enter the first string");
    gets(str1);

    strcpy(str2, str1);				 // Copies str1 to str2

    puts(str1);
    puts(str2);

    return 0;
}