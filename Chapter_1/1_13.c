
// Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the hisogram with the bars horizontal; a vertical orientation is more
// challenging.

#include <stdio.h>

#define MAX_WORD_LENGTH 10


int main ( void ) 
{
	int input, i, j;
	int word_histo[MAX_WORD_LENGTH - 1];
	int c_count = 0;

	for( i = 0; i < MAX_WORD_LENGTH; ++i ) 
	{
		word_histo[i] = 0;
	}
	while ( ( input = getchar() ) != EOF )
	{
		if( input == ' ' || input == '\n' || input == '\t' ) 
		{
			if( c_count == 0 ) 
			{
				continue;
			}
			word_histo[c_count] += 1;
			c_count = 0;
		} 
		else if ( c_count > MAX_WORD_LENGTH )
		{
			c_count = 0;
			continue;
		}
		else
		{
			++c_count;
		}
	}

	putchar('\n');
	for( i = 1; i < MAX_WORD_LENGTH; ++i ) 
	{
		printf("%i ", i);
		for ( j = 0; j < word_histo[ i ]; ++j ) 
		{
			putchar('.');
		}
		putchar('\n');
	}
}
