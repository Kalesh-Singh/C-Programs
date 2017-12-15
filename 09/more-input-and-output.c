#include <stdio.h>

int main()
{
    char name[80];
    int num;

    printf("Enter name\n");
    scanf("%s", name);
    printf("Enter number:\t");
    scanf("%d", &num);

    printf("%s", name);
    printf("%d", num);

    return 0;
}