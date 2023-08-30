#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to head of a list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *present_node, *fill_in;

	if (!head)
		return;
	present_node = *head;

	while (present_node)
	{
		fill_in = present_node;
		present_node = present_node->next;
		free(fill_in);
	}
	*head = NULL;
}
