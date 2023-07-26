#include <unistd.h>

/**
 * print_most_numbers - prints numbers from 0 to 9 but
 * does not print 2 and 4
 *
 * Return: Returns nothing.
 */

void print_most_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
			write(1, &n, 1);
		}
		n++;
	}
	write(1, "\n", 1);
}
