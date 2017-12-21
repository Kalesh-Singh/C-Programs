/* PREPROCESSOR OPERATORS
 * '#'  - Called the stringizing operator. It is used to convert 
 *        the parameters passed to macros into strings.
 *
 * '##' - Called the token pasting operator. It eliminates the 
 *        whitespace and concatenates the non-whitespace characters.
 *        It is used to create new tokens.
 *       
 */

#include <stdio.h>
#define MKSTR(s) #s
#define CONCAT(a, b) a##b

int main()
{
    printf(MKSTR(I like C++\n));  

    int xy = 10;
    printf("%d\n", CONCAT(x, y));
 
    return 0;
}