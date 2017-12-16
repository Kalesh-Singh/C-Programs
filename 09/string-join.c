#include <stdio.h>
#include <string.h>

int main()
{
    char word[80];
    char adword[40];

    puts("Enter name");
    gets(word);

    puts("Enter one more string");
    gets(adword);

    strcat(word, adword); 		// concatenates the contents of adword to word  

    puts(word);				// prints the concatenated word

    return 0;
}