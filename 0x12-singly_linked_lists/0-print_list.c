#include "lists.h"

/**
 * _strlen - returns string length
 * @s: string input
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int id = 0;

	if (!s)
		return (0);

	while (*s++)
		id++;
	return (id);
}

/**
 * print_list - prints a linked list
 * @h: first node pointer
 *
 * Return: list size
 */

size_t print_list(const list_t *h)
{
	size_t id = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		id++;
	}
	return (id);
}
