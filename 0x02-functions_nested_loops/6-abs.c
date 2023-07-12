#include <unistd.h>

/**
 * int _abs(int n) - Computes the absolute value of an integer
 * @n: Test variable
 * if...else if - executes a target statement if the test
 * expression is true
 * write - writes content from buffer to an open file
 *
 * Return: Returns result if successful. If not, 1
 */

int _abs(int n)
{
	int result;

	if (n >= 0)
	{
		result = n;
	}
	else if (n < 0)
	{
		result = (-1) * n;
	}
	else
	{
		result = write(1, "Input is not an integer", 23);
	}
	return (result);
}
