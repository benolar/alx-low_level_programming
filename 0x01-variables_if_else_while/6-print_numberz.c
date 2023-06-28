#include <stdio.h>

/**
 * main - Entry point
 * putchar - prints character of unnsigned
 * character type to stdout
 * while - a loop that executes as long as a given
 * condition is true
 *
 * C program to print all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 *
 * Return: returns 0 if successful. if not, 1
 */

int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
