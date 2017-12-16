#include <stdio.h>

void string_to_upper(char*);

int main()
{
    char name[80];
    
    puts("Enter a sentence");
    gets(name);

    string_to_upper(name);

    puts(name);

    return 0;
}

void string_to_upper(char* ptr)
{
    while (*ptr != '\0')
    {
        if (*ptr >= 97 && *ptr <= 122)
             *ptr -= 32;
        
        ptr++;
    }
}


