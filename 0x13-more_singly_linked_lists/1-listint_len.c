#include <stdio.h>
#include "lists.h"

/**
 * listint_len - then length of the list.
 *
 * @h: the linked list
 *
 * Return: the len
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;

		if ((*h).next == NULL)
			break;
		else
			h = (*h).next;
	}

	return (count);
}
