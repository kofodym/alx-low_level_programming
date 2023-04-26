#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a functn of an array.
 * @array: The array
 * @size: The size
 * @action: This is a pointer that prints regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
	{
		unsigned int m;


		if (array == NULL || action == NULL)
			return;


		for (m = 0; m < size; m++)
		{
			action(array[m]);
		}
	}
