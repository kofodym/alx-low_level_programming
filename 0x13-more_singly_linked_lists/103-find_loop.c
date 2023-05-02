#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h2;
	listint_t *h1;

	h2 = head;
	h1 = head;
	while (head && h2 && h2->next)
	{
		head = head->next;
		h2 = h2->next->next;

		if (head == h2)
		{
			head = h1;
			h1 =  h2;
			while (1)
			{
				h2 = h1;
				while (h2->next != head && h2->next != h1)
				{
					h2 = h2->next;
				}
				if (h2->next == head)
					break;

				head = head->next;
			}
			return (h2->next);
		}
	}

	return (NULL);
}
