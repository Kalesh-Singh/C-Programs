#include <stdio.h>
#include <string.h>

int main()
{
    char name[80];
    int length;

    puts("Enter name");
    gets(name);
 
    length = strlen(name);
    printf("Total number of characters = %d\n", length);

    return 0;
}