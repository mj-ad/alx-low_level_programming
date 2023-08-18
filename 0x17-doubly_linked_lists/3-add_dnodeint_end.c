#include "lists.h"

/**
 * add_dnodeint - adds node at the end of the list
 * @head: head
 * @n: data
 *
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *last = (*head);

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if ((*head) == NULL)
	{
		node->prev = NULL;
		*head = node;
	}

	while (last->next != NULL)
		last = last->next;
	
	last->next = node;
	node->prev = last;
	return (node);
}