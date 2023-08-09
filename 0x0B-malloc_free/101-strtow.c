#include <stdlib.h>
#include "main.h"

int word_scope(char *str);
int word_count(char *str);
char **strtow(char *str);

/**
 * word_scope - finds the span of string
 * @str: string
 *
 * Return: string length
 */

int word_scope(char *str)
{
	int mark = 0, str_length = 0;

	while (*(str + mark) && *(str + mark) != ' ')
	{
		str_length++;
		mark++;
	}
	return (str_length);
}

/**
 * word_count - counts number of words
 * in a string
 * @str: string
 *
 * Return: count
 */

int word_count(char *str)
{
	int mark = 0, str_length = 0, wordList = 0;

	for (mark = 0; *(str + mark); mark++)
	{
		str_length++;
	}
	for (mark = 0; mark < str_length; mark++)
	{
		if (*(str + mark) != ' ')
		{
			wordList++;
			mark += word_scope(str + mark);
		}
	}
	return (wordList);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: NULL or otherwise points to array
 */

char **strtow(char *str)
{
	int mark = 0;
	int wordList, wloc, loc, iloc;
	char **string;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wordList = word_count(str);
	if (wordList == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (wordList + 1));
	if (string == NULL)
		return (NULL);

	for (wloc = 0; wloc < wordList; wloc++)
	{
		while (str[mark] == ' ')
			mark++;
		loc = word_scope(str + mark);

		string[wloc] = malloc(sizeof(char) * (loc + 1));

		if (string[wloc] == NULL)
		{
			for (; wloc >= 0; wloc--)
				free(string[wloc]);

			free(string);
			return (NULL);
		}

		for (iloc = 0; iloc < loc; iloc++)
			string[wloc][iloc] = str[mark++];

		string[wloc][iloc] = '\0';
	}
	string[wloc] = NULL;
	return (string);
}
