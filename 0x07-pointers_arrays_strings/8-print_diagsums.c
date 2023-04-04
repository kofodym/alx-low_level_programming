#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square matrix
 * @a: the array
 * @square_matrix: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int square_matrix)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < square_matrix; i++)
	{
		sum1 = sum1 + a[i * square_matrix + i];
	}

	for (i = square_matrix - 1; i >= 0; i--)
	{
		sum2 += a[i * square_matrix + (square_matrix - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
