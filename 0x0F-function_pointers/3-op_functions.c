#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - This returns the sum of two nos.
 * @a: The first no
 * @b: The second no
 *
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - This returns the difference of two nos.
 * @a: The first no
 * @b: The second no
 *
 * Return: The diff
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - This returns the product of two nos
 * @a: The first no
 * @b: The second no
 *
 * Return: The product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - This returns the division of two nos
 * @a: The first no
 * @b: The second no
 *
 * Return: The quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - This returns the remainder of the division of two nos.
 * @a: The first no
 * @b: The second no
 *
 * Return: The remainder %);
*/
int op_mod(int a, int b)
{
	return (a % b);
}
