#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * using an input of bytes from src
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of bytes from src to dest
 * Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int id1;
	int id2;

	id1 = 0;
	while (dest[id1] != '\0')
	{
		id1++;
	}

	id2 = 0;
	while (id2 < n && src[id2] != '\0')
	{
		dest[id1] = src[id2];
		id1++;
		id2++;
	}

	dest[id1] = '\0';
	return (dest);
}
