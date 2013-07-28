
// Rewrite the temperature conversion program of Section 1.2 for conversion

#include <stdio.h>

#define LOWER     0
#define UPPER   300
#define STEP	20

float fahrToCels( float fahr );

int main( void ) 
{
 	float fahr, celsius;
	
	fahr = LOWER;

	printf("%3s %10s \n", "Fahrenheit", "Celsius");

	while( fahr <= UPPER ) 
	{
		celsius = fahrToCels( fahr );
		printf("%3.2f %15.2f\n", fahr, celsius);
		fahr += STEP;
	}
}

float fahrToCels( float fahr )
{
    return 5 * ( fahr - 32 ) / 9;
}