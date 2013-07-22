//
// Exercise 1-8
//
// Write a program to copy its input to its output,
// replacing more blanks by a single blank.
//
// Note : Used signal (CTRL+D) to interupt.

#include <stdio.h>

main()
{
	int 	  input = 0
		, blanks = 0
		, tabs 	= 0
		, newlines = 0;

	while ( ( input = getchar() )  != EOF ) 
	{
		if ( input == ' ' ) 
		{
			++blanks;
		}
		else if ( input == '\n' ) 
		{
			++newlines;
		} 
		else if ( input == '\t' ) 
		{
			++tabs;
		}
		else if ( input == '\0' ) 
		{
			++input;	
		}
	}

	printf("There was %d blanks, %d tabs and %d newlines. \n", blanks, tabs, newlines);

}
