#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix
 * @a: the array
 * @square_matrix:The matrix size
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int square_matrix)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < square_matrix; i++)
	{
		sum1 = sum1 + a[i];
	}
	a -= square_matrix;

	for (i = 0; i < square_matrix; i--)
	{
		sum2 += a[i];
		a -= square_matrix;
	}

	printf("%d, %d\n", sum1, sum2);
}
