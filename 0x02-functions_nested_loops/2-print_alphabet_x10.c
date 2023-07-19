#include "main.h"

/**
 * print_alphabet_x10 - Create lower case alphabet x10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 26; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
