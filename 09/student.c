#include <stdio.h>

int main()
{
    int roll_no;
    float percentage;
    char grade;
    char name[80];
    
    printf("Enter roll number of the student:\t");
    scanf("%d", &roll_no);

    printf("Enter the name of the student:\t");

    fflush(stdin);			// flush input buffer
    // scanf("%s", name);		// scanf cannot take multi-word input
    gets(name);

    printf("Enter the percentile marks of the student:\t");
    scanf("%f", &percentage);

    printf("Enter grade obtained by the student:\t");

    /* We need to flush for the program to work correctly.
     * This is because when we hit the enter char after 
     * entering the percentile marks it is read as the grade
     * character.
     */ 

    // flushall();			// gcc and dos		
    fflush(stdin);			// mingw

    scanf("%c", &grade);

    printf("Roll number = %d\n", roll_no);
    // printf("Name        = %s\n", name);
    // printf(name);                    // printf() does not print new line char at the end
    puts(name);				// The convention is to use gets and puts together 
 					// puts() also prints a newline char at the end
    printf("Percentage  = %0.2f\n", percentage);
    printf("Grade       = %c\n", grade);

    return 0;
}