
// write a program to remove trailling blanks and tabs from each line of input,
// and to delete entirely blank lines.

#include <stdio.h>
#define MAXLINE 1000

int main( void )
{
    	int len, i, j, text_pos = 0;
    	char line[ MAXLINE ], new_line[ MAXLINE ];
	for(i = 0; ( line[ i ] = getchar() ) != EOF; ++i );
	
	if ( i > 1 ) 
	{
		len = i;
		i = 0;
		for( i = 0; i < len; ++i )
		{
			if( line[i] == '\n' )
			{	
				text_pos = i;
				while( line[ text_pos ] == '\t' || line[ text_pos ] == ' ' || line[ text_pos ] == '\n' ) 
				{
					--text_pos;
					--j;
				}
				new_line[ ++j ] = '\n';
				++j;	
			} 
			else 
			{
				new_line[ j ] = line[ i ];
				++j;
			}
		}	
	}
	new_line[ j ] = '\0';
	printf( "\n Input with each line stripped for trailling space and tabs \n\n%s\n", new_line );
 	return 0;
}
