#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: The memory
 *
 * Return: The pointer to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);

}

