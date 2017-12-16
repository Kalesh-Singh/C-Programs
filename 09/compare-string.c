#include <stdio.h>

int compare(const char*, const char*);

int main()
{
    char str1[80];
    char str2[80];
    int p;

    puts("Enter the first string");
    gets(str1);

    puts("Enter the second string");
    gets(str2);

    p = compare(str1, str2);

    if (p == 0)
        puts("The 2 strings are identical");
    else
        puts("The strings are not identical");

    return 0;
}

int compare(const char* ptr1, const char* ptr2)
{
    while (*ptr1 != '\0')
    {
        if (*ptr1 == *ptr2)
        {
            ptr1++;
            ptr2++;
        }
        else
            return *ptr2 - *ptr1;
    }
    return *ptr2 -  *ptr1;
}   
   