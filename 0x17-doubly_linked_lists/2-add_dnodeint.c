#include "lists.h"

/**
 * add_dnodeint - adds node to beginning of list
 * @head: head of list
 * @n: data
 *
 * Return: address of new element or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = (dlistint_t*)malloc(sizeof(dlistint_t));

	node->n = n;
	node->next = (*head);
	node->prev = NULL;

	if ((*head) != NULL)
	{
		(*head)->prev = node;
	}

	(*head) = node;
}