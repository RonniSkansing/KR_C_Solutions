
// Write a program to copy its input to its output, replacing each tab by \t ,
//  each backspace by \b , and each backslash by \\. 
// This makes tabs and backspaces visible in an unambiguous way.

#include <stdio.h>

main()
{
	int  input;

	while( (input = getchar()) != EOF ) 
	{
		if( input == '\t') 
		{
			putchar('\\');
			putchar('t');
			continue;
		} 
		else if( input == '\b' ) 
		{
			putchar('\\');
			putchar('b');
		}
		else if( input == '\\' ) 
		{
			putchar('\\');
			putchar('\\');
		} 
		else
		{		
			putchar(input);
		}
	}

}
