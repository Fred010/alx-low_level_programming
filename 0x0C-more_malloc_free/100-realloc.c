#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: points to previous memory allocated
 * @old_size: previous size in the ptr
 * @new_size: recent size in the ptr memory space
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int id;
	char *newptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
			return (NULL);

		return (newptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);

	for (id = 0; id < old_size && id < new_size; id++)
	{
		newptr[id] = ((char *) ptr)[id];
	}
	free(ptr);
	return (newptr);
}
