#include <stdio.h>

/**
 * main - Entry point
 * putchar - prints character of
 * unsigned character type to stdout
 *
 * C program to print lowercase alphabet in reverse,
 * followed by a new line
 *
 * Return: returns 0 if successfull. if not, 1
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
