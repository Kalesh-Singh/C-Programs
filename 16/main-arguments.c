#include <stdio.h>
#include <stdlib.h>

// NOTE: All command line arguments are passed as strings 

int main(int argc, char* argv[])
{
    int i;

    for (i = 1; i < argc; i++)		// Notice that we started printing for index 1 
        printf("%s ", argv[i]);		// This is because the name of the executable file is 
    printf("\n");			// passed as the first argument
		
    return 0;
}