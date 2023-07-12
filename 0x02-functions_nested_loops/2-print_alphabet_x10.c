#include <unistd.h>

/**
 * print_alphabet_x10 - Prints lowercase alphabet 10 times
 * void: Means null
 * while - a loop that executes as long as
 * target argument is true
 *
 * write: Writes content from buffer to an open file
 */

void print_alphabet_x10(void)
{
	char ch;
	int n = 0;

	while (n < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			write(1, &ch, 1);
			ch++;
		}
		write(1, "\n", 1);
		n++;
	}
}
