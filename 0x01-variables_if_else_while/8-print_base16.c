#include <stdio.h>

/**
 * main - Entry point
 * putchar - prints character of
 * unsigned character type to stdout
 * while - a loop that executes until the given
 * condition becomes false
 *
 * C program to print base 16 numbers in lowercase,
 * followed by a new line
 *
 * Return: returns 0 if successfull. if not, 1
 */

int main(void)
{
	char ch = 'a';
	int n = 0;
	
	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
