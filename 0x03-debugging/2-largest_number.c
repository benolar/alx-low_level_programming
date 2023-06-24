#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: 0 if successful.  if not, 1
 */

int main(void)
{
    int a = 23;
    int b = 15;
    int c = 75;
    
    if (a > b && b > c || a > c && c > b || a > b && a > c)
    {
        printf("%d is the largest number\n", a);
    }
    else if (b > a && a > c || b > c && c > a || b > a && b > c)
    {
        printf("%d is the largest number\n", b);
    }
    else if (c > a && a > b || c > b && b > a || c > a && c > b)
    {
        printf("%d is the largest number\n", c);
    }
    else
    {
        printf("all numbers are equall\n");
    }

    return (0);
}
