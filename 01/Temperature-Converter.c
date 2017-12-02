/* This program converts degree Fahrenheit to degree Celcius */

#include <stdio.h>

int main()
{
	float celcius, fahrenheit;              // Variable declarations

    printf("Enter temperature in degree Fahrenheit:\t");
    scanf("%f", &fahrenheit);

    celcius = (fahrenheit - 32) * 5 / 9;

    printf("The temperature in celcius is %0.2f\n\n", celcius);

	return 0;
}
