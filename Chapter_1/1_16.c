
// Revise the main routine of the longest-line program so it will correctly print 
// the length of arbitrarily long input lines, and as much as possible of the text.

// Changed getline to egetline as it conflicts with stdio.h native getline.
#include <stdio.h>
#define MAXLINE 1000

int egetline( char line[], int maxline );
void copy( char to[], char from[] );

int main( void ) 
{
	int len;
	int max;
	char line[ MAXLINE ];	
	char longest[ MAXLINE ];
	
	max = 0;
	while( ( len = egetline(line, MAXLINE) ) > 0 ) 
	{
		if( len > max ) 
		{
			max = len;
			copy(longest, line);
		}
		if( max > 0 ) 
		{	// -1 to len to remove the \n
			printf("Length of input is %i long.\n%s", len -1, longest);
		}
		return 0;
	}
}

int egetline( char s[], int lim)
{
	int i, c;
	for( i = 0; i < lim - 1 && ( c = getchar() ) != EOF && c != '\n'; ++i )
	{
		s[i] = c;
	}
	if( c == '\n' )
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void copy( char to[], char from[] )
{
	int i;
	
	i = 0;
	while( ( to[i] = from[i] ) != '\0' )
	{
		++i;
	}
}
