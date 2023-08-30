#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to head of a list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *present_node = *head;
	listint_t *next;

	while (present_node != NULL)
	{
		next = present_node->next;
		free(present_node);
		present_node = next;
	}
	*head = NULL;
}
