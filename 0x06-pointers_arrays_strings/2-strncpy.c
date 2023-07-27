#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: storing string
 * @src: source string
 * @n: number of bytes copied from src
 * Return: (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int id = 0;
	int len_src = 0;

	while (src[id++])
		len_src++;
	for (id = 0; src[id] && id < n; id++)
		dest[id] = src[id];
	for (id = len_src; id < n; id++)
		dest[id] = '\0';
	return (dest);
}
