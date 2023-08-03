#include <stdio.h>
#include "main.h"

/**
 * final_key - returns last id of a string
 * @s: points to string
 * Return: int
 */

int is_palindrome(char *s);
int scan(char *s, int i, int j, int mode);
int final_key(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += final_key(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int j = final_key(s);

	return (scan(s, 0, j - 1, j % 2));
}

/**
 * scan - checks for palindrome
 * @s: string
 * @i: int from right to left
 * @j: int from left to right
 * @mode: int
 * Return: 0 or 1
 */

int scan(char *s, int i, int j, int mode)
{
	if ((i == j && mode != 0) || (i == j + 1 && mode == 0))
		return (1);
	else if (s[i] != s[j])
		return (0);
	else
		return (scan(s, i + 1, j - 1, mode));
}
