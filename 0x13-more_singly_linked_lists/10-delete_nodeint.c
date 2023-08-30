#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list
 * @head: pointer to pointer of head of list
 * @index: node mark to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *last_node;
	unsigned int id = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);

		return (1);
	}
	node = *head;

	while (node)
	{
		if (id == index)
		{
			last_node->next = node->next;
			free(node);

			return (1);
		}
		id++;
		last_node = node;
		node = node->next;
	}
	return (-1);
}
