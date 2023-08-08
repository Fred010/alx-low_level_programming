#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer
 * to a newly allocated space in memory
 * @str: string
 *
 * Return: duplicate
 */

char *_strdup(char *str)
{
	int loc = 0, index = 1;
	char *string_dup;

	if (str == NULL)
		return (NULL);

	while (str[index])
	{
		index++;
	}

	string_dup = malloc((sizeof(char) * index) + 1);

	if (string_dup == NULL)
		return (NULL);

	while (loc < index)
	{
		string_dup[index] = str[index];
		loc++;
	}

	string_dup[index] = '\0';
	return (string_dup);
}
