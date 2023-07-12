#include <unistd.h>

/**
 * int print_sign(int n) - Prints the sign of a number
 * @n: Test variable
 * if...else if - executes a target statement if the test
 * expression is true
 * write - writes content from buffer to an open file
 *
 * Return: Returns result if successful. If not, 1
 */

int print_sign(int n)
{
        int result;
        
        if (n > 0)
        {
                write(1, "+", 1);
                result = 1;
        }
        else if (n < 0)
        {
                write(1, "-", 1);
                result = -1;
        }
        else if (n == 0)
        {
            write(1, "0", 1);
            result = 0;
        }
        else
        {
            write(1, "Input is not a number", 21);
        }
        return (result);
}
