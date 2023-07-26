#include <unistd.h>

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: Returns nothing.
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		write(1, &n, 1);
	}
	write(1, "\n", 1);
}
