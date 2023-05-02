#include "lists.h"

/**
 * reverse_listint -  a function that reverses
 * a listint_t linked list
 * @head: The pointer
 * Return: A pointer head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *forward = NULL;

	while (*head)
	{
		forward = (*head)->forward;
		(*head)->forward = back;
		back = *head;
		*head = forward;
	}

	*head = back;

	return (*head);
}
