#include <stdio.h>

int string_length(char*);

int main()
{
    char name[80];
    int length;
    
    puts("Enter a string");
    gets(name);

    length = string_length(name);

    printf("The number of characters in the string = %d\n", length);

    return 0;
}

int string_length(char* ptr)
{
    int count = 0;

    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }

    return count;
}