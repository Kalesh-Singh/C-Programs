#include <stdio.h>

int main()
{
    char name[80];
    
    puts("Enter name");
    gets(name);

    puts("\nOriginal string is:");
    puts(name);

    strrev(name);		// Reverses the string

    puts("\nThe reversed string is:");
    puts(name);
   
    return 0;
}