#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: value to be inputted
 * Return: (n)
 */

char *leet(char *n)
{
	int id1, id2;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (id1 = 0; n[id1] != '\0'; id1++)
	{
		for (id2 = 0; id2 < 10; id2++)
		{
			if (n[id1] == str1[id2])
			{
				n[id1] = str2[id2];
			}
		}
	}
	return (n);
}
