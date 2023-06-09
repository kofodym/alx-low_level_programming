#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n:int
 * Return:int
 */
int factorial(int n)
{
	int z;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		z = n * factorial(n - 1);
	}
			return (z);

}

