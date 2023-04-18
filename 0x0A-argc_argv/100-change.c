#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - The change function'
 * @argc:The count of the no of args
 * @argv: The array of string of argc
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int argc_value, i, value;
	int coins[] = {25, 10, 5, 2, 1};

	/*if the no of arguments passed is not 1, print Error  */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/*convert that argc to string*/
	argc_value = atoi(argv[1]);
	value  = 0;

	/*if no of argc is negative*/
	if (argc_value < 0)
	{
		printf("0\n");
		return (0);
	}
	
	if (argc_value >= 0)
	{
		for (i = 0; i < 5 ; i++)
		{
			while (argc_value >= coins[i])
			{
				value++;
				argc_value -= coins[i];
			}
		}	
	}

	printf("%d\n", value);
	return (0);
}
