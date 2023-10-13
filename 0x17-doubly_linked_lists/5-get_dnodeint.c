#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: points to list head
 * @index: node index starting with 0
 *
 * Return: nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int dimension = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == dimension)
			return (tmp);
		dimension++;
		tmp = tmp->next;
	}
	return (NULL);
}
