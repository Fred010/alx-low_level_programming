#include "search_algos.h"

/**
 * jump_list - looks for int value in a sorted singly linked list
 *         using jump search.
 * @list: points to the head of the linked list to search.
 * @size: number of nodes in the list.
 * @value: value to search for.
 *
 * Return: -1 if the value is not present or the head of the list is NULL,
 *        Otherwise, a pointer to the first node where the value is located.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t pace, len_pace;
	listint_t *node, *jump;

	/*Check if the list is NULL or empty */
	if (list == NULL || size == 0)
		return (NULL);

	pace = 0;
	len_pace = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		/*Store the previous jump node */
		node = jump;

		for (pace += len_pace; jump->index < pace; jump = jump->next)
		{ /*If reached the end of the list */
			if (jump->index + 1 == size)
				break;
		}

		printf("Value checked at index[%ld] =[%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes[%ld] and[%ld]\n",
		node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index[%ld] =[%d]\n", node->index, node->n);

	printf("Value checked at index[%ld] =[%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
