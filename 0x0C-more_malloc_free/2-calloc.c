#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements of allocated memory
 * @size: size of allocated memory
 *
 * Return: points to ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int ind1 = 0, ind2 = 0;
	char *ptr;

	ind2 = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(ind2);

	if (ptr == NULL)
		return (NULL);

	while (ind1 < ind2)
	{
		ptr[ind1] = 0;
		ind1++;
	}
	return (ptr);
}
