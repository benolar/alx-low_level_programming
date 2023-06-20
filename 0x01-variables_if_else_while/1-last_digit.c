#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * @n - number to be checked
 *
 * C program to print last digit of a number
 *
 * Return: returns 0 if successful. if not, 1
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	int last_digit = n % 10;
	int nld = last_digit;

	if ( n % 10 > 5 )
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, nld);
	}
	else if ( n % 10 == 0 )
	{
		printf("Last digit of %d is %d and is %d\n", n, nld, nld);
	}
	else if ( n % 10 < 6 && n % 10 != 0 )
	{
                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nld);
        }
	else
	{
		printf("Last digit of %d is %d\n", n, nld);
	}
		return (0);
}
