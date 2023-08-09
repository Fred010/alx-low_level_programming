#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: result
 */

char *argstostr(int ac, char **av)
{
	int ind1 = 0, ind2 = 0, ind3 = 0;
	int total_length = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	while (ind1 < ac)
	{
		while (av[ind1][ind2])
		{
			total_length++;
			ind2++;
		}
		ind2 = 0;
		ind1++;
	}

	result = malloc((sizeof(char) * total_length) + ac + 1);

	ind1 = 0;
	while (av[ind1])
	{
		while (av[ind1][ind2])
		{
			result[ind3] = av[ind1][ind2];
			ind3++;
			ind2++;
		}
		result[ind3] = '\n';
		ind2 = 0;
		ind3++;
		ind1++;
	}
	ind3++;
	result[ind3] = '\0';
	return (result);
}
