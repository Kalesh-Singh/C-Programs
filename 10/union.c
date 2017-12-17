/* Unions are use to
 * 1. Create a variant array
 * 2. Enforce the alignment of a variable to a particular address boundary
 * 3. To get under the hood of C's type system

 Unions are similar to structs.
 However they can only contain one of their data members at any given time.
 Enough memory will be allocated to hold the largest data member.
*/

#include <stdio.h>
#include <string.h>

typedef union
{
    int x;
    float y;
    char ch;
    char name[10];
} data;

// Note: Any instance of the above union type will have 10 bytes since name is the largest member.


int main()
{
    data d1;

    printf("Memory allocated = %d\n\n", sizeof(d1));

    d1.x = 5;
    strcpy(d1.name, "Albert");    
    d1.y = 9.01f;
    d1.ch = 'W';
    

    // Notice that only the last member assigned is preserved the others contain garbage

    printf("%d\n", d1.x);
    printf("%f\n", d1.y);
    printf("%c\n", d1.ch);
    printf("%s\n", d1.name);  

    return 0;
}





