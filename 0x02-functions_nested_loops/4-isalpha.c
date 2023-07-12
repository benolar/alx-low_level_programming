/**
 * _isalpha - Checks for alphabetic character
 * @c: Test variable
 * if - executes a target statement if test expression is
 * true
 *
 * Return: Returns result if successful. If not, 1
 */

int _isalpha(int c)
{
	int result;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
