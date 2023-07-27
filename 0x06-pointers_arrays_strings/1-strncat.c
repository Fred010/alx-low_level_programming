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
	int id = 0;
	int len_dest = 0;

	while (dest[id++])
		len_dest++;
	for (id = 0; src[id] && id < n; id++)
		dest[len_dest] = src[id];
	return (dest);
}
