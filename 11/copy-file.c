#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fpsource;
    FILE* fptarget;
    char ch;

    fpsource = fopen("c:\\Users\\kales.DESKTOP-E097GGF\\Desktop\\C-Programs\\11\\studentinfo.txt", "r");

    if (fpsource == NULL)
    {
        printf("File not found.\n");
        exit(1);
    }

    fptarget = fopen("c:\\Users\\kales.DESKTOP-E097GGF\\Desktop\\C-Programs\\11\\studentinfo-copy.txt", "w");

    if (fptarget == NULL)
    {
        printf("File not found.\n");
        fclose(fpsource);		// NOTE: Close any opened files before exiting.
        exit(2);
    }

    while(1)
    {
        ch = fgetc(fpsource);
        
        if (ch == EOF)
            break;
 
        fputc(ch, fptarget);
    }

    fclose(fptarget);

    fclose(fpsource);

    return 0;
}

    