#include <unistd.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Returns nothing.
 */

void more_numbers(void)
{
	int n = '0';

	while (n <= '9')
	{
		write(1, "01234567891011121314\n", 21);
		n++;
	}
}
