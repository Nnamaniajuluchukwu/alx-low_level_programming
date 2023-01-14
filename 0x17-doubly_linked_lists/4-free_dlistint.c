#include "lists.h"

/**
 * free_dlistint - free the memory allocated.
 * @head: the linked list
 */

void free_dlistint(dlistint *head)
{
	dlistint_t *curr = head;

	while (head)
	{
		curr = head;
		head = curr->next;
		free(curr);
	}
}
