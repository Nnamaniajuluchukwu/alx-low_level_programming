#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements present in the linked list.
 *
 * @h: pointer to linked list.
 *
 * Return: The number of list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		count++;

		if ((*h).next != NULL)
			h = (*h).next;
		else
			break;
	}
	return (count);
}
