#include <stdio.h>

int main()
{
    char name[80];
    int num;
    
    puts("Enter name");
    gets(name);

    printf("Enter number:\t");
    scanf("%d", &num);

    puts(name);
    printf("%d", num);

    return 0;
}