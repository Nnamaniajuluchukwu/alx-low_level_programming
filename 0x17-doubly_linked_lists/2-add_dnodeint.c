#include "lists.h"

/**
 * add_dnodeint - add node at the begining of the linked list.
 * @head: the linked list
 * @n: value
 * Return: pointer to the linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *curr;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;
	return (*head);
}
