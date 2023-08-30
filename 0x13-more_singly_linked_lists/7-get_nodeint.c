#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: first node pointer
 * @index: mark of node value
 *
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr_node = head;
	unsigned int mark = 0;

	while (curr_node != NULL)
	{
		if (mark == index)
		{
			return (curr_node);
		}
		curr_node = curr_node->next;
		mark++;
	}
	return (NULL);
}
