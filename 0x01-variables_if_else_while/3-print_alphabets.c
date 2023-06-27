#include <stdio.h>

/**
 * main - Entry point
 * putchar - prints character of
 * unnsigned character type to stdout
 * for - a loop that executes until the specified
 * result is achieved
 *
 * C program to print the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: returns 0 if successful. if not, 1
 */

int main(void)
{
	char ch = 'a';
	char cl = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	
	putchar(ch);
	
	for (cl = 'A'; cl <= 'Z'; cl++)
		
	putchar(cl);
	putchar('\n');
	return (0);
}
