#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * isNumber - validates that there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */

int isNumber(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		/*isdigit() method returns False if all the chars are NOT digits*/
		if (!isdigit(str[i]))
		{
			return (0);
		}

	}
	return (1);
}

/**
 *main - The main function
 *@argc: The no of args
 *@argv: The array of argc
 *Return: 0,1
 */

int main(int argc, char *argv[])
{
	int i;
	int convert_to_int;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (isNumber(argv[i]))
		{
			convert_to_int = atoi(argv[i]);
			sum += convert_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
