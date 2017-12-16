#include <stdio.h>
#include <string.h>

void reverse(char*);

int main()
{
    char name[80];

    puts("Enter a string");
    gets(name);

    puts("\nThe original string is:");
    puts(name);

    reverse(name);			// Reverses the string

    puts("\nThe reversed string is:");
    puts(name);

    return 0;
}

void reverse(char* ptr)
{
    int len = strlen(ptr);
    char* ptr2 = ptr + len - 1;
    char temp;

    while (ptr < ptr2)
    {
        temp = *ptr;
        *ptr = *ptr2;
        *ptr2 = temp;

        ptr++;
        ptr2--;
    }
}