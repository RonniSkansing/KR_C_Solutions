//
// Exercise 1-5
//
// Modify the temperature conversion program to print the table in reverse order, that is, from 300 degrees to 0. 

#include <stdio.h>

#define LOWER 	0
#define UPPER   300
#define STEP	20


main() 
{
 	float fahr, celsius;
	
	celsius = UPPER;

	
	printf("%3s %10s \n", "Celsius", "Fahrenheit");

	while( celsius >= LOWER ) 
	{
		fahr = ((float) 9/ (float) 5) * celsius + 32;
		printf("%3.2f %15.2f\n", celsius, fahr);
		celsius -= STEP;
	}
}
