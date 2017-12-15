#include <stdio.h>

int main()
{
    char name[80];
    
    puts("Enter name");
    gets(name);
  
    puts("Original string is:");
    puts(name);

    // strlwr(name);		// Converts to lowercase
    strupr(name);		// Converts to uppercase

    puts(name);

    return 0;
}