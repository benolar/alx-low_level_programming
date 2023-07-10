#include <unistd.h>

/**
 * print_alphabet - Prints alphabet in lowercase
 * and adds a new line
 *
 * write: Writes content from buffer to an open file
 *
 * Return: Returns null.
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		write(1, &ch, 1);
		ch++;
	}
	write(1, "\n", 1);
	return;
}
