#include "lists.h"

/**
 * free_list - frees every node of list
 * @head: head node pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node, *adjoin_node;

	if (!head)
		return;

	node = head;

	while (node)
	{
		adjoin_node = node->next;
		free(node->str);
		free(node);
		node = adjoin_node;
	}
}
