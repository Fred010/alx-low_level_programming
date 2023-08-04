#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: character container
 * Return: (0)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int id = 0;
	int val;

	while (*s)
	{
		for (val = 0; accept[val]; val++)
		{
			if (*s == accept[val])
			{
				id++;
				break;
			}
			else if (accept[val + 1] == '\0')
				return (id);
		}
		s++;
	}
	return (id);
}
