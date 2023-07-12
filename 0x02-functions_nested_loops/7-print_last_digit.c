#include <unistd.h>
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Test variable
 * if - executes a target statement if the test
 * expression is true
 * write - writes content from buffer to an open file
 *
 * Return: Returns result if successful. If not, -1
 */

int print_last_digit(int n)
{
	char ch[12];
	int ans;

	if (n >= 0)
	{
		ans = n % 10;
		sprintf(ch, "%d", ans);
	}
	else
	{
		ans = -(n % 10);
		sprintf(ch, "%d", ans);
	}
	write(1, &ch, 1);
	return (ans);
}
