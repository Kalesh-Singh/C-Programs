#include <stdio.h>

void stringcopy(char*, const char*);

int main()
{
    char name1[80];
    char name2[80];

    puts("Enter first string");
    gets(name2);

    stringcopy(name1, name2);

    puts(name1);
    puts(name2);

    return 0;
}

void stringcopy(char* ptr1, const char* ptr2)
{
    
    do {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    } while (*ptr2 != '\0');
}
