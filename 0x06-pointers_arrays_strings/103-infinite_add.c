#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 *
 * Return: Always (0)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0, id_r = 0;
	int i, j;
	int num1, num2, sum;
	char temp;

	if (len1 + len2 >= size_r)
		return (0);

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 ||
			carry; i--, j--)
	{
		num1 = i >= 0 ? n1[i] - '0' : 0;
		num2 = j >= 0 ? n2[j] - '0' : 0;

		sum = num1 + num2 + carry;

		carry = sum / 10;
		sum %= 10;
	}
	r[id_r] = '\0';

	for (i = 0, j = id_r - 1; i < j; i++, j--)
	{
		temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}
	return (r);
}
