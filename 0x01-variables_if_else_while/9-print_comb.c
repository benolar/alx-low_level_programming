#include <stdio.h>

/**
 * main - Entry point
 * while - A loop that executes a target statement
 * as long as a given condition is true
 * if - Executes when a given condition is true
 * putchar - Prints result to stdout
 *
 * C program that prints all possible combinations
 * of single-digit numbers
 *
 * Return: returns 0 if successful. if not, 1
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
