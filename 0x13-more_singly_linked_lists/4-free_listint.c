#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: first node pointer
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *present_node;

	while (head != NULL)
	{
		present_node = head;
		head = head->next;
		free(present_node);
	}
}
