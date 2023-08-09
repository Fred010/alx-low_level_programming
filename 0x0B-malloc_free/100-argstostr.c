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

	for (ind1 = 0; ind1 < ac; ind1++)
	{
		total_length += strlen(av[ind1]) + 1;
	}

	result = (char *) malloc(total_length * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	for (ind1 = 0; ind1 < ac; ind1++)
	{
		while (av[ind1][ind2] != '\0')
		{
			result[ind3++] = av[ind1][ind2++];
		}
		result[ind3++] = '\n';
	}
	result[ind3 - 1] = '\0';
	return (result);
}
