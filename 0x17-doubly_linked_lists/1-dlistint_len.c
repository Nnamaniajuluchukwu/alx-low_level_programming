#include "lists.h"

/**
 * dlistint_len - return the number of list.
 * @h: the linked list
 * Return: the number of list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
