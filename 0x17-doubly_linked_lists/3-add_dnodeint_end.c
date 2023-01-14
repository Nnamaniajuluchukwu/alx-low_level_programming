#include "lists.h"

/**
 * add_dnodeint_end - add node at the ending.
 * @head: the linked list.
 * @n: value
 * Return: the linked list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *curr = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	curr = *head;
	while(curr->next)
		curr = curr->next;
	new->prev = curr;
	curr->next = new;
	curr = new;

	return (*head);
}
