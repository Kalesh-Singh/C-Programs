#include <stdio.h>

int main()
{
    FILE* ownfile;
    char name[80];
    char* ptr;
    
    ownfile =fopen("c:\\Users\\kales.DESKTOP-E097GGF\\Desktop\\C-Programs\\11\\myname.txt", "w");
    
    printf("Enter your name:\t");
    gets(name);

    ptr = name;

    while(*ptr != '\0')
    {
        fputc(*ptr, ownfile);
        ptr++;
    }

    fclose(ownfile);

    return 0;
}