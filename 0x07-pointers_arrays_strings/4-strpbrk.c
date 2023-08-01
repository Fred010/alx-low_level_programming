#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: character container
 * Return: (0) or NULL if no byte found
 */

char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		char *current_accept = accept;

		while (*current_accept != '\0')
		{
			if (*s == *current_accept)
			{
				return (s);
			}

			current_accept++;
		}

		s++;
	}

	return (NULL);
}
