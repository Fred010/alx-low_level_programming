#include "main.h"

/**
 * _strlen - outputs string len
 * @s: string
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int id = 0;

	if (!s)
		return (0);

	while (*s++)
		id++;

	return (id);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to be appended
 * @text_content: text to write
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fildes;
	ssize_t byte_count = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fildes = open(filename, O_WRONLY | O_APPEND);

	if (fildes == -1)
		return (-1);
	if (len)
		byte_count = write(fildes, text_content, len);

	close(fildes);

	return (byte_count == len ? 1 : -1);
}
