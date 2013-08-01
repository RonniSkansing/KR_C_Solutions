
// Write a function reverse(s) that reverses the character string s . 
// Use it to write a program that reverses its input a line at a time.

// NOTE : getline from the original code has been rewritten to egetline.

#include <stdio.h>
#define MAXLINE 1000

void reverse( char s[] );
int egetline( char s[], int limit);

int main( void )
{
	int len;
    	char line[ MAXLINE ], new_line[ MAXLINE ];
	while (  len = egetline( line, MAXLINE )  != 0 )
	{
		reverse( line );
		printf( "%s", line );	
	}
 	return 0;
}

void reverse( char s[] ) 
{
	int i = 0;
	int len;
	char temp[ MAXLINE ];
	for( len = 0; s[ len ] != '\n'; ++len );

	--len;	// cutting off \n
	
	while( len  >= 0 )
	{
		temp[ i ] = s[ len ];
		++i;
		--len;
	}
	
	while( len < i ) 
	{
		s[ len ] = temp[ len ];
		++len;
	}

	s[ ++len ] = '\0';
}

int egetline( char s[], int lim )
{
	int c, i;

	for( i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i )
	{
		s[ i ] = c;
	}

	if( c == '\n' )
  	{
		s[ i++ ] = c;
  	} 

	return i;
}
