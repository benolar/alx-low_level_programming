#include <unistd.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print character
 *
 * Return: Returns nothing.
 */

void print_line(int n)
{
	int ln = 1;

	while (ln <= n)
	{
		write(1, "_", 1);
		ln++;
	}
	write(1, "\n", 1);
}
