#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * find_num - checks for non digit character
 * in a string
 * @str: string
 *
 * Return: 0 if non digit and 1 if otherwise
 */

int find_num(char *str)
{
	int id = 0;

	while (str[id])
	{
		if (str[id] < '0' || str[id] > '9')
		{
			return (0);
		}
		id++;
	}
	return (1);
}

/**
 * _str_scope - finds and outputs the length of string
 * @str: string
 *
 * Return: string length
 */

int _str_scope(char *str)
{
	int id = 0;

	while (str[id] != '\0')
	{
		id++;
	}
	return (id);
}

/**
 * _errata - controls errors
 * in the main function
 */

void _errata(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int len1, len2, n_len, num1, num2, id, fetch, *result;
	int loc = 0;
	char *str1, *str2;

	str1 = argv[1];
	str2 = argv[2];

	if (argc != 3 || !find_num(str1) || find_num(str2))
		_errata();

	len1 = _str_scope(str1);
	len2 = _str_scope(str2);
	n_len = len1 + len2 + 1;

	result = malloc(sizeof(int) * n_len);

	if (!result)
		return (1);

	for (id = 0; id <= len1 + len2; id++)
		result[id] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = str1[len1] - '0';
		fetch = 0;
		for (len2 = _str_scope(str2) - 1; len2 >= 0; len2--)
		{
			num2 = str2[len2] - '0';
			fetch += result[len1 + len2 + 1] + (num1 * num2);
			result[len1 + len2 + 1] = fetch % 10;
			fetch /= 10;
		}
		if (fetch > 0)
			result[len1 + len2 + 1] += fetch;
	}
	for (id = 0; id < n_len - 1; id++)
	{
		if (result[id])
			loc = 1;
		if (loc)
			_putchar(result[id] + '0');
	}
	if (!loc)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
