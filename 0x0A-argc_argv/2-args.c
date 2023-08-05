#include "main.h"
#include <stdio.h>

/**
 * main - prints all incoming arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int id;

	for (id = 0; id < argc; id++)
	{
		printf("%s\n", argv[id]);
	}
	return (0);
}
