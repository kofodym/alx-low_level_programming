#include "main.h"

/**
 * check - checks for the square root
 * @num1 :I nt
 * @num2 : int
 *
 * Return: int
 */
int check(int num1, int num2)
{
	if (num1 * num1 == num2)
		return (num1);
	if (num1 * num1 > num2)
		return (-1);
	return (check(num1 + 1, num2));
}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
