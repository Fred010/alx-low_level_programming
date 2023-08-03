#include <stdio.h>
#include "main.h"

/**
 * pass_by_string - iterates string
 * @s2: second string
 * and it can contain wildcard
 *
 * Return: points to string
 */

char *pass_by_string(char *s2)
{
	if (*s2 == '*')
		return (pass_by_string(s2 + 1));
	else
		return (s2);
}

/**
 * commence - entry point
 * @s1: first string
 * @s2: second string
 * and can contain  wildcard
 *
 * Return: 1 if identical and 0 if otherwise
 */

int commence(char *s1, char *s2)
{
	int rate = 0;

	if (*s1 == 0)
		return (0);
	if (*s1 == *s2)
		rate += wildcmp(s1 + 1, s2 + 1);
	rate += commence(s1 + 1, s2);
	return (rate);
}

/**
 * wildcmp - compares two strings and returns 1
 * if the strings can be considered identical, otherwise return 0
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if identical and 0 if otherwise
 */

int wildcmp(char *s1, char *s2)
{
	int rate = 0;

	if (!*s1 && *s2 == '*' && !*pass_by_string(s2))
		return (1);
	if (*s1 == *s2)
	{
		if (!*s1)
			return (1);

		return (wildcmp(s1 + 1, *s2 == '*' ? s2 : s2 + 1));
	}
	if (!*s1 || !s2)
		return (0);

	if (*s2 == '*')
	{
		s2 = pass_by_string(s2);
		if (!*s2)
			return (1);
		if (*s1 == *s2)
			rate += wildcmp(s1 + 1, s2 + 1);
		rate += commence(s1, s2);
		return (!!rate);
	}
	return (0);
}
