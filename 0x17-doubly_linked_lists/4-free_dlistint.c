#include "lists.h"

/**
 * free_dlistint - free the memory allocated.
 * @head: the linked list
 */

void free_dlistint(dlistint *head)
{
	dlistint_t *curr;

	if (head == NULL)
		return;

	while (head)
	{
		curr = head;
		head = head->next;
		free(curr);
	}
}
