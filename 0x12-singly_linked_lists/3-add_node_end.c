#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - It Write a function that adds a new
 * node at the end of a list_t list.
 * @head: A double pointer to the list_t
 * @str: A string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp = *head;
	unsigned int l = 0;

	while (str[l])
	{
		l++;
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->l = l;
	new_node->next = NULL;

	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	while (temp->next)
	{
		temp = temp->next;
	i}
	temp->next = new_node;

	return (new_node);
}
