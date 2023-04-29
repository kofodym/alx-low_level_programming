#include <stdlib.h>
#include "lists.h"

/**
 * list_len - This Write a function that returns the
 * number of elements in a linked list_t list.
 * @h: A pointer to the list_t list
 *
 * Return: excess in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
	i++;
	h = h->next;
	}
	return (i);
}
