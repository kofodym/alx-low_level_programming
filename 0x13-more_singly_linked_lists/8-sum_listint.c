#include "lists.h"

/**
 * sum_listint -  a function that returns
 * the sum of all the data (n) of a listint_t linked list.
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *temp = head;

	while (temp)
	{
		s += temp->n;
		temp = temp->next;
	}

	return (s);
}
