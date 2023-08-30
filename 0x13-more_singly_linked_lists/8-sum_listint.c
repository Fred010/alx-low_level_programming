#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: first node pointer
 *
 * Return: integer
 */

int sum_listint(listint_t *head)
{
	int add_up = 0;

	while (head != NULL)
	{
		add_up += head->n;
		head = head->next;
	}
	return (add_up);
}
