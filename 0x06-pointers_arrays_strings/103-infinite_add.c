#include <stdio.h>
#include <string.h>
/**
 *rev_string - reverse array
 *@n: integer params
 *@str: reverse string
 *Return: 0
 */

char *reverse_string(char *str)
{
	int len = strlen(str);

	for (int i = 0; i < len / 2; i++)
	{
		char temp = str[i];

		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}

	return str;
}

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0;
	int i = 0, j = 0, k = 0;

	int len1 = strlen(n1);
	int len2 = strlen(n2);

	reverse_string(n1);
	reverse_string(n2);

	while (i < len1 || j < len2 || carry != 0)
	{
		int num1 = (i < len1) ? n1[i] - '0' : 0;
		int num2 = (j < len2) ? n2[j] - '0' : 0;
		int sum = num1 + num2 + carry;

		carry = sum / 10;

		int digit = sum % 10;

		if (k < size_r - 1)
		{
			r[k++] = digit + '0';
		}
		else
		{
			return 0;
		}

		i++;
		j++;
	}
	r[k] = '\0';
	reverse_string(r);

	return r;
}
