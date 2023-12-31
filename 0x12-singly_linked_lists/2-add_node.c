#include "lists.h"

/**
 * add_node - adds node to start of linked list
 * @head: head node pointer address
 * @str: node string
 *
 * Return: list size
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *current_head = malloc(sizeof(list_t));

	if (!head || !current_head)
		return (NULL);
	if (str)
	{
		current_head->str = strdup(str);
		if (!current_head->str)
		{
			free(current_head);
			return (NULL);
		}
		current_head->len = _strlen(current_head->str);
	}
	current_head->next = *head;
	*head = current_head;
	return (current_head);
}
