#include <stdio.h>
#include "main.h"

/**
 * main - This function prints the no of arguments
 * @argc: argc count
 * @argv: The array containing argc
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	/*Gets rid of the unused parameter error*/
	(void)argv;
	printf("%d\n", argc);

	return (0);
}
