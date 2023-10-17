#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: points first string
 * @s2: points second string to be compared to first
 * Return: if s1 < s2, difference is negated
 * if s1 > s2, the difference is positive
 * if s1 == s2, it equals to 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
