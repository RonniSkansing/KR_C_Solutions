//
// Exercise 1-3
//
// Modify the temperature conversion program to print a heading above the table.

#include <stdio.h>

#define LOWER 	0
#define UPPER   300
#define STEP	20


main() 
{
 	float fahr, celsius;
	
	fahr = LOWER;

	
	printf("%3s %10s \n", "Fahrenheit", "Celsius");

	while( fahr <= UPPER ) 
	{
		celsius = 5 * ( fahr - 32 ) / 9;
		printf("%3.2f %15.2f\n", fahr, celsius);
		fahr += STEP;
	}
}
