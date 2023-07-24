#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to be used
 * Return: new line
 */

void puts_half(char *str)
{
	int len = strlen(str);
	int halflen = len / 2;
	int i;

	for (i = 0; i < halflen; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
