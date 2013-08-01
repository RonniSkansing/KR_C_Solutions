
// Write a program to print all input lines that are longer than 80 characters.

// Changed getline to egetline as it conflicts with stdio.h native getline.
#include <stdio.h>
#define MAXLINE 1000
#define MAXLENGTH 81 // +1 for \n
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
		if( len < MAXLENGTH ) 
		{
			copy(longest, line);
			printf("%s\n",  longest);
		} 
		else
		{
			printf("The Max input is 80 chars.\n"); 
		}
	}
	return 0;
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
