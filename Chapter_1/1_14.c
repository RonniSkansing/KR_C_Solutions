
// Write a program to write out the frequencies of different 
// characters in its input.

#include <stdio.h>
#define CHAR_MAX 255

int main( void )
{
    int input, i;
    char c_freq[ CHAR_MAX ] = {0};
    
    while ( ( input = getchar() ) != EOF ) 
    {
        c_freq[ input ]++;
    }
    
    
    for( i = 0; i <= CHAR_MAX; ++i )
    {
        printf( "%.3i : %c\t =  ", i );
        printf( "%i\n", c_freq[ i ] );
    }
}