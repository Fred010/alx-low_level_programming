#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to pointer of head of a list
 *
 * Return: integer
 */

int pop_listint(listint_t **head)
{
	listint_t *curr_node;
	int n;

	if (!head || !*head)
		return (0);

	curr_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = curr_node;

	return (n);
}
