#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer head of a list
 * @idx: new node index
 * @n: new node value
 *
 * Return: pointer to node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *curr_node;
	unsigned int id = 0;

	curr_node = malloc(sizeof(listint_t));

	if (!head || !curr_node)
		return (NULL);

	curr_node->n = n;
	curr_node->next = NULL;

	if (!idx)
	{
		curr_node->next = *head;
		*head = curr_node;

		return (curr_node);
	}
	node = *head;

	while (node)
	{
		if (id == idx - 1)
		{
			curr_node->next = node->next;
			node->next = curr_node;

			return (curr_node);
		}
		id++;
		node = node->next;
	}
	free(curr_node);

	return (NULL);
}
