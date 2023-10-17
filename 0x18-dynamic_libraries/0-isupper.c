#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 * Return: 1 for upper and 0 for any case
 */

int _isupper(int c)
{
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}
