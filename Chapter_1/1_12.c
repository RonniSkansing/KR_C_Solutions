// Write a program that prints its input one word per line.

#include <stdio.h>

int main ( void ) 
{
	int input;

	while ( ( input = getchar() ) != EOF ) 
	{
		if ( input == ' ' || input == '\n' || input == '\t' ) 
		{
			putchar('\n');
		} 
		else 
		{
			putchar(input);
		}
	}
}

