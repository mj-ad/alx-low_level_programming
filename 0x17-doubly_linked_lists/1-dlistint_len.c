#include "lists.h"

/**
 * dlistint_len - returns number of elements
 * @h: head of node
 * 
 * Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
    size_t counter = 0;

    while(h != NULL)
    {
        counter++;
        h = h->next;
    }
    return (counter);
}