#include <unistd.h>

/**
 * isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: Returns 1 if character is uppercase. If not, 0.
 */

int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
	{
		result = 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		result = 0;
	}
	else
	{
		result = 0;
		write(1, "Input is not a character ", 25);
	}
	return (result);
}
