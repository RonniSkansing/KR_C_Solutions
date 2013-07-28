//
// Exercise 1-6
//
// Verify the expression getchar != EOF is 1 or 0  (t,f)

#include <stdio.h>

int result;

int main( void )
{
	printf("getchar() != EOF evals to %i \n", ( getchar() !=  EOF ) );
    return 0;
}