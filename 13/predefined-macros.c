#include <stdio.h>

int main()
{
    printf("This is a chapter on preprocessor directives in C\n");
    printf("This program is all about predefined macros in C\n");
 
    printf("Line number is %d\n", __LINE__);
    printf("File name is %s\n", __FILE__);
    printf("Time of compilation is %s\n", __TIME__);
    printf("Date of compilation is %s\n", __DATE__);

    return 0;
}