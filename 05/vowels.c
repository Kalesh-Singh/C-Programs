/* Program to determine whether a character entered is a vowel or consonant */

#include <stdio.h>

int main()
{
    char ch;                    // to take character input
    
    printf("Enter any letter:\t");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'a':
            printf("It's a vowel.\n");
            break;
        case 'e':
            printf("It's a vowel.\n");
            break;
        case 'i':
            printf("It's a vowel.\n");
            break;
        case 'o':
            printf("It's a vowel.\n");
            break;
        case 'u':
            printf("It's a vowel.\n");
            break;
        default:
            printf("It's a consonant.\n");
            break;
    }

    return 0;
}

