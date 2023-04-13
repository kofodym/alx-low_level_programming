#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - This program multiplies two int numbers
 * @argc: The no of args
 * @argv: The array of argc
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum, no1, no2;

	/* checks If the program does not receive two arguments*/
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	no1 = atoi(argv[1]);
	no2 = atoi(argv[2]);
	sum = no1 * no2;

	printf("%d\n", sum);
	return (0);
}
