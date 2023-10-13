#include "lists.h"

/**
 * dlistint_len - output the number of elements in doubly linked list
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodeCount = 0;

	if (h == NULL)
		return (nodeCount);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
