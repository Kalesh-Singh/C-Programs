#include <stdio.h>

int main()
{
    char filmnames[5][25];
    
    for (int i = 0; i <=4; i++)
    {
        printf("Enter the name of the film:\t");
        gets(filmnames[i]);

    }
    
    for (int i = 0; i <= 4; i++)
    {
        puts(filmnames[i]);
    }

    return 0;
}