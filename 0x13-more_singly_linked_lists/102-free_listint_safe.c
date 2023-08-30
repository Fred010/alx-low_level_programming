#include "lists.h"
#include <stdlib.h>

/**
 * identify_loop - finds a loop in a linked list
 * @head: first node pointer
 *
 * Return: node address
 */

listint_t *identify_loop(listint_t *head)
{
	listint_t *ptr, *last;

	if (head == NULL)
		return (NULL);

	for (last = head->next; last != NULL; last = last->next)
	{
		if (last == last->next)
			return (last);
		for (ptr = head; ptr != last; ptr = ptr->next)
			if (ptr == last->next)
				return (last->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer head of list
 *
 * Return: size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *n_loop;
	size_t span;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	n_loop = identify_loop(*h);

	for (span = 0; (*h != n_loop || loop) && *h != NULL; *h = next)
	{
		span++;
		next = (*h)->next;

		if (*h == n_loop && loop)
		{
			if (n_loop == n_loop->next)
			{
				free(*h);
				break;
			}
			span++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;

	return (span);
}
