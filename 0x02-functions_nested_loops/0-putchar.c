#include <stdio.h>

/**
 * main - Entry point
 * write - Prints string to stdout
 *
 * Return: returns 0 if successful. if not 1
 */

int main(void)
{
	return (write(1, "_putchar\n", 9));
}