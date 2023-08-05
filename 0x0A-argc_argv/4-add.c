#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int id;
	unsigned int mark, sum = 0;
	char *loc;

	if (argc > 1)
	{
		for (id = 1; id < argc; id++)
		{
			loc = argv[id];
			for (mark = 0; mark < strlen(loc); mark++)
			{
				if (loc[mark] < 48 || loc[mark] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(loc);
			loc++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
