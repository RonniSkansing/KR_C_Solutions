//
// Exercise 1-2
//
// Experiment with to find out what happens when prints's argument string contains \c 
// when c is some character not listed above

#include <stdio.h>

main()
{
	printf("hello, ");
	printf("wcorld, i");
	printf("\n");

}

// 1_2.c:12:9: warning: unknown escape sequence: '\c' [enabled by default]
