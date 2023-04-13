#include <stdio.h>
#include "main.h"

/**
 * main - The main function
 * @argc: The no of args
 * @argv: The array of argc string
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
