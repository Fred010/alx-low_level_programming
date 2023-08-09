#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: result
 */

char *str_concat(char *s1, char *s2)
{
	int id1 = 0, id2 = 0, id3 = 0, id4 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[id1])
		id1++;
	while (s2[id2])
		id2++;

	id4 = id1 + id2;

	result = malloc((sizeof(char) * id4) + 1);

	if (result == NULL)
		return (NULL);

	id2 = 0;

	while (id3 < id4)
	{
		if (id3 <= id1)
			result[id3] = s1[id3];

		if (id3 >= id1)
		{
			result[id3] = s2[id2];
			id2++;
		}
		id3++;
	}
	result[id3] = '\0';
	return (result);
}
