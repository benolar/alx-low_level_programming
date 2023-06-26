#include <stdio.h>

/**
 * main - Entry point
 * sizeof - gets the size of a variable type
 * C program to print the size of various types on the computer
 * it is compiled and run on
 *
 * Return: returns 0 if successful. if not, 1
 * */

int main(void)
{
	char c;
	int i;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", (long int)sizeof(ld));
	printf("Size of a long long int: %lld byte(s)\n", (long long int)sizeof(lld));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
