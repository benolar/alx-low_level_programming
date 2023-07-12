#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98,
 * followed by a new line.
 * @n: Test variable
 * while - a loop that executes as long as the condition
 * is true
 * if - executes a target statement if the test condition
 * is true
 * printf - prints formatted string to stdout
 *
 * Return: Returns 0 if successful. If not, -1
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		printf("%d", n);
		n--;
		printf(", ");
	}
	while (n <= 98)
	{
		printf("%d", n);
		n++;
		if (n < 99)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
