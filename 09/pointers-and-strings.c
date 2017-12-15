#include <stdio.h>

void display(char*);

int main()
{
    char name[80];
    char* ptr;
    

    puts("Enter name:");
    gets(name);
    
    display(name);

    return 0;
}

void display(char* ptr)
{
    while(*ptr != '\0')
    {
        // printf("%c", *ptr);
        putch(*ptr);
        ptr++;
    }
}
