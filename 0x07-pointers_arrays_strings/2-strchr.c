#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character occurrence
 * Return: (s) or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	int id;

	for (id = 0; s[id] >= '\0'; id++)
	{
		if (s[id] == c)
			return (s + id);
	}
	return (NULL);
}
