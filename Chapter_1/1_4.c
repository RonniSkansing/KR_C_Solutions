//
// Exercise 1-4
//
// Write a program to print the corresponding Celsius to Fahrenheit table.

#include <stdio.h>

#define LOWER 	0
#define UPPER   300
#define STEP	20


main() 
{
 	float fahr, celsius;
	
	fahr = LOWER;

	
	printf("%3s %10s \n", "Celsius", "Fahrenheit");

	while( celsius <= UPPER ) 
	{
		fahr = ((float) 9/ (float) 5) * celsius + 32;
		printf("%3.2f %15.2f\n", celsius, fahr);
		celsius += STEP;
	}
}
