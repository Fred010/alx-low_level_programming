#include "lists.h"

/**
 * add_node_end - add a node at end of linked lists
 * @head: head node pointer address
 * @str: node string
 *
 * Return: list size
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !current_node)
		return (NULL);
	if (str)
	{
		current_node->str = strdup(str);
		if (!current_node->str)
		{
			free(current_node);
			return (NULL);
		}
		current_node->len = _strlen(current_node->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = current_node;
	}
	else
		*head = current_node;

	return (current_node);
}
