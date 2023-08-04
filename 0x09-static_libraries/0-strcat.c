#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: (dest)
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int index;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (index = 0; src[index] != 0; index++)
	{
		dest[dest_len] = src[index];
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
