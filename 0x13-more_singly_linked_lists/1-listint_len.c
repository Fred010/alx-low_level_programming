#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: first node pointer
 *
 * Return: list size
 */

size_t listint_len(const listint_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}
	return (element_count);
}
