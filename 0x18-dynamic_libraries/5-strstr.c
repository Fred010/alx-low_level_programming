#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring occurrence
 * Return: (0)
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		char *hay_ptr = haystack;
		char *needle_ptr = needle;

		while (*needle_ptr != '\0' && *hay_ptr == *needle_ptr)
		{
			hay_ptr++;
			needle_ptr++;
		}

		if (*needle_ptr == '\0')
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
