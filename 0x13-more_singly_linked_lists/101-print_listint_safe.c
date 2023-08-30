#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: first node pointer
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *flat_ptr = head, *swift_ptr = head;
	size_t mark = 0;

	while (flat_ptr && swift_ptr && swift_ptr->next)
	{
		printf("[%p] %d\n", (void *)flat_ptr, flat_ptr->n);
		flat_ptr = flat_ptr->next;
		swift_ptr = swift_ptr->next->next;

		mark++;

		if (flat_ptr == swift_ptr)
		{
			printf("-> [%p] %d\n", (void *)flat_ptr, flat_ptr->n);
			exit(98);
		}
	}
	if (flat_ptr)
	{
		printf("[%p] %d\n", (void *)flat_ptr, flat_ptr->n);
		mark++;
	}
	return (mark);
}
