/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to be checked
 *
 * Return: Returns 1 if c is a digit. If not, 0.
 */

int _isdigit(int c)
{
	int result;

	if (!(c >= 'A' && c <= 'Z') && !(c >= 'a' && c <= 'z'))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
