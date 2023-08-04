#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination point
 * @src: source point
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int str_num;

	for (str_num = 0; src[str_num] != '\0'; str_num++)
	{
		dest[str_num] = src[str_num];
	}
	dest[str_num++] = '\0';
	return (dest);
}
