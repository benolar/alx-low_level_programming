#include <stdio.h>

/**
 * main - Entry point
 * fprint - sends formatted output to a stream
 * stderr - standard error
 *
 * C program to  print: "and that piece of
 * art is useful\" - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
 *
 * Return - returns 1 if successful. if not, 0
 */

int main(void)
{
	fprintf(stderr, "and that piece of art is useful\" 
			- Dora Korpar, 2015-10-19\n");
	return (1);
}
