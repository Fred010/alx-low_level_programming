#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: (str)
 */

char *cap_string(char *str)
{
	int id = 0;

	while (str[id])
	{
		while (!(str[id] >= 'a' && str[id] <= 'z'))
			id++;
		if (str[id - 1] == ' ' ||
				str[id - 1] == '\t' ||
				str[id - 1] == '\n' ||
				str[id - 1] == ',' ||
				str[id - 1] == ';' ||
				str[id - 1] == '.' ||
				str[id - 1] == '!' ||
				str[id - 1] == '?' ||
				str[id - 1] == '"' ||
				str[id - 1] == '(' ||
				str[id - 1] == ')' ||
				str[id - 1] == '{' ||
				str[id - 1] == '}' ||
				id == 0)
			str[id] -= 32;
		id++;
	}
	return (str);
}
