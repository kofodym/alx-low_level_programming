#include "lists.h"

/**
 * reverse_listint -  a function that reverses
 * a listint_t linked list
 * @head: The pointer
 * Return: A pointer head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
