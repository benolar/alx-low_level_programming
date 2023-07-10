#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * write - Prints string to stdout
 *
 * Return: returns 0 if successful. if not 1
 */

int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
