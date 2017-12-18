#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nol = 0, now = 0, noc = 0;		// Number of lines, words and characters in the file
    FILE* fp;
    char ch;

    fp = fopen("c:\\Users\\kales.DESKTOP-E097GGF\\Desktop\\C-Programs\\11\\studentinfo.txt", "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        exit(0);
    }

    do
    {
        ch = fgetc(fp);

        noc++;
        
        switch(ch)
        {
            case '\n':
                nol++;
                break;
            case ' ':
                now++;
                break;
            default:
                break;
        }
    } while (ch != EOF);

    fclose(fp);

    printf("Number of lines = %d\n", nol);
    printf("Number of words = %d\n", now);
    printf("Number of characters = %d\n", noc);

    return 0;
}
    