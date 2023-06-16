#include <stdio.h>

/* C program to print the size of various types on the computer it is compiled and run on. */

int main(void)
{
	char c;
	int i;
	float f;
	long l;
	long long int LL;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %ULL\n", (unsigned long long int)sizeof(LL));
	return (0);
}
