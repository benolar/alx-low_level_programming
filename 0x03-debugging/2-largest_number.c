/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && b > c) || (a > c && c > b) || (a > b && a > c))
	{
		largest = a;
	}
	else if ((b > a && a > c) || (b > c && c > a) || (b > a && b > c))
	{
		largest = b;
	}
	else if ((c > a && a > b) || (c > b && b > a) || (c > a && c > b))
	{
		largest = c;
	}
	else if ((a == b && a > c) || (a == c && a > b))
	{
		largest = a;
	}
	else if (b == c && b > a)
	{
		largest = b;
	}
	else
	{
		largest = a;
	}

	return (largest);
}
