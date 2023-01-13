#include "lists.h"

/**
 * print_dlistint - prints the values in a linked list.
 * @h: linked list.
 * Return: The number of node.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
