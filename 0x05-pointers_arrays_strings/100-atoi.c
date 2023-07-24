#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int num = 0;
	unsigned int u_int = 0;
	int sign = 1;
	int index = 0;

	while (s[num])
	{
		if (s[num] == 45)
		{
			sign *= -1;
		}
		while (s[num] >= 48 && s[num] <= 57)
		{
			index = 1;
			u_int = (u_int * 10) + (s[num] - '0');
			num++;
		}
		if (index == 1)
		{
			break;
		}
		num++;
	}
	u_int *= sign;
	return (u_int);
}
