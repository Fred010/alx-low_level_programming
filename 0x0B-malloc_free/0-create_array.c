#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: array size
 * @c: string character
 *
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int id;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (id = 0; id < size; id++)
	{
		str[id] = c;
	}

	return (str);
}
