#include "lists.h"

/**
 * list_len - finds length of linked list
 * @h: first node pointer
 *
 * Return: list size
 */

size_t list_len(const list_t *h)
{
	size_t id = 0;

	while (h)
	{
		h = h->next;
		id++;
	}
	return (id);
}
