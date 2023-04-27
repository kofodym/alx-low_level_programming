#include <stdio.h>
#include <stdlib.h>
/**
 * main - This prints opcodes
 * @argc: no of arg
 * @argv: array of args
 *
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	int no_of_bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	no_of_bytes = atoi(argv[1]);

	if (no_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < no_of_bytes; i++)
	{
		if (i == no_of_bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
