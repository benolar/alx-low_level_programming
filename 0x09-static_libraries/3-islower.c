/**
 * _islower - Checks for lowercase character
 * @c: Test variable
 * if - executes target statement if test expression
 * is true
 *
 * Return: Returns result if successful. If not, 1
 */

int  _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
	{
		result = 0;
	}
	return (result);
}
