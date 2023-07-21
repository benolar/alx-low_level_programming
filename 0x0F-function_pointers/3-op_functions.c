/**
 * op_add - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Returns result.
 */

int op_add(int a, int b);
{
	int result;

	result = a + b;

	return (result);
}

/**
 * op_sub - returns the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Returns result.
 */

int op_sub(int a, int b);
{
	int result;

	result = a - b;

	return (result);
}

/**
 * op_mul - returns the product of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Returns result.
 */

int op_mul(int a, int b);
{
	int result = a * b;

	return (result);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: Returns result.
 */

int op_div(int a, int b);
{
	int result = a / b;

	return (result);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first integer
 * @b: second integer
 *
 * Return: Returns result.
 */

int op_mod(int a, int b);
{
        int result = a % b;

        return (result);
}
