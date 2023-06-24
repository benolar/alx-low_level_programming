#include <stdio.h>

/**
 * main - Entry point
 * putchar - prints character of
 * unsigned character type to stdout
 *
 * C program to print alphabet in lowercase,
 * followed by a new line
 *
 * Return: returns 0 if successfull. if not, 1
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
