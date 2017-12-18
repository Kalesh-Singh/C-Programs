#include <stdio.h>

int main()
{
    FILE* fp;
    char ch;

    fp = fopen("c:\\Users\\kales.DESKTOP-E097GGF\\Desktop\\C-Programs\\11\\studentinfo.txt", "r");

    if (fp == NULL)
        printf("The file cannot be opened\n");
    else
    {
        while (1)
        {
            ch = fgetc(fp);

            if (ch == EOF)
                break;

            // printf("%c", ch);
            putch(ch);
        }
    }

    fclose(fp); 

    return 0;
}