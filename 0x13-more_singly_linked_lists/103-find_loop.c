#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: first node pointer
 *
 * Return: address of the node for loop start, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loc, *final;

	if (head == NULL)
		return (NULL);

	for (final = head->next; final != NULL; final = final->next)
	{
		if (final == final->next)
			return (final);
		for (loc = head; loc != final; loc = loc->next)
			if (loc == final->next)
				return (final->next);
	}
	return (NULL);
}
