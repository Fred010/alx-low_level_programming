#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int length_loc(char *str);
char *_generate_array(int size);
char *_repeat_zeroes(char *str);
int _get_num(char c);
void _product(char *prod, char *mult, int num, int zeroes);
void _sum_nums(char *end_prod, char *nxt_prod, int new_len);

/**
 * length_loc - finds length of string
 * @str: string
 *
 * Return: string length
 */

int length_loc(char *str)
{
	int str_len = 0;

	while (*str++)
		str_len++;

	return (str_len);
}

/**
 * _generate_array - create character array and initialize
 * @size: size of array
 *
 * Return: points to array
 */

char *_generate_array(int size)
{
	int mark;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		exit(98);
	for (mark = 0; mark < (size - 1); mark++)
		arr[mark] = 'x';
	arr[mark] = '\0';
	return (arr);
}

/**
 * _repeat_zeroes - iterates through string of leading zeroes
 * until it encounters non zeroe element
 * @str: string
 *
 * Return: points to non zero element
 */

char *_repeat_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;
	return (str);
}

/**
 * _get_num - change characters to int
 * @c: character
 *
 * Return: int
 */

int _get_num(char c)
{
	int num = c - '0';

	if (num < 0 || num > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (num);
}

/**
 * _prooduct - multiples string by number
 * @prod: placeholder for result
 * @mult: string of numbers
 * @num: single digit
 * @zeroes: leading zeroes
 *
 * Return: void
 */

void _product(char *prod, char *mult, int num, int zeroes)
{
	int len_mult, n_num, n_tens = 0;

	len_mult = length_loc(mult) - 1;
	mult += len_mult;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; len_mult >= 0; len_mult--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}
		n_num = (*mult - '0') * num;
		n_num += n_tens;
		*prod = (n_num % 10) + '0';
		n_tens = n_num / 10;
	}
	if (n_tens)
		*prod = (n_tens % 10) + '0';
}

/**
 * _sum_nums - add numbers stored in two strings
 * @end_prod: final product
 * @nxt_prod: next product to be added
 * @new_len: next length of next product
 *
 * Return: void
 */

void _sum_nums(char *end_prod, char *nxt_prod, int new_len)
{
	int n_num, n_tens = 0;

	while (*(end_prod + 1))
		end_prod++;
	while (*(nxt_prod + 1))
		nxt_prod++;
	for (; *end_prod != 'x'; end_prod--)
	{
		n_num = (*end_prod - '0') + (*nxt_prod - '0');
		n_num += n_tens;
		*end_prod = (n_num % 10) + '0';
		n_tens = n_num / 10;
		nxt_prod--;
		new_len--;
	}

	for (; new_len >= 0 && *nxt_prod != 'x'; new_len--)
	{
		n_num = (*nxt_prod - '0');
		n_num += n_tens;
		*end_prod = (n_num % 10) + '0';
		n_tens = n_num / 10;
		end_prod--;
		nxt_prod--;
	}
	if (n_tens)
		*end_prod = (n_tens % 10) + '0';
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
	int size, mark, num, zeroes = 0;
	char *end_prod, *nxt_prod;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = _repeat_zeroes(argv[1]);
	if (*(argv[2]) == '0')
		argv[1] = _repeat_zeroes(argv[1]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = length_loc(argv[1]) + length_loc(argv[2]);
	end_prod = _generate_array(size + 1);
	nxt_prod = _generate_array(size + 1);

	for (mark = length_loc(argv[2]) - 1; mark >= 0; mark--)
	{
		num = _get_num(*(argv[2] + mark));
		_product(nxt_prod, argv[1], num, zeroes++);
		_sum_nums(end_prod, nxt_prod, size - 1);
	}
	for (mark = 0; end_prod[mark]; mark++)
	{
		if (end_prod[mark] != 'x')
			putchar(end_prod[mark]);
	}
	putchar('\n');

	free(nxt_prod);
	free(end_prod);

	return (0);
}
