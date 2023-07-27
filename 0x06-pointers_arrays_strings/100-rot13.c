#include <stdio.h>
#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: points to string parameters
 * Return: (s)
 */

char *rot13(char *s)
{
	int id1, id2;
	char data[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_data[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (id1 = 0; s[id1] != '\0'; id1++)
	{
		for (id2 = 0; id2 < 52; id2++)
		{
			if (s[id1] == data[id2])
			{
				s[id1] = rot_data[id2];
				break;
			}
		}
	}
	return (s);
}
