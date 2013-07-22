// 
// Exercise 1-9
//
// Write a program to copy each string of one orr more blanks by a single blank

#include <stdio.h>

int main( void ) 
{
	int input;
	int last_was_space = 0;
	while( ( input = getchar() )  != EOF )
	{
		if ( input == ' ' ) 
		{
			last_was_space = 1;
			continue;
		} 
		else 
		{
			if ( last_was_space == 1 ) 
			{
				putchar(' ');
				last_was_space = 0;
			}
			putchar(input);
	
		}
	}
}
