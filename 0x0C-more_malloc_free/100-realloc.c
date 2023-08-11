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
	size_t copy_size;
	char *newptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	newptr = malloc(new_size);

	if (newptr == NULL)
	{
		return (NULL);
	}

	copy_size = (old_size > new_size) ? old_size : new_size;
	memcpy(newptr, ptr, copy_size);

	free(ptr);
	return (newptr);
}
