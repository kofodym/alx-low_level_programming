#include <stdlib.h>
#include "lists.h"

/**
 * free_list - It Write a function that frees a list_t list.
 * @head: The list_t
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}
}
