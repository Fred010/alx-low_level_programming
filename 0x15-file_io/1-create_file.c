#include "main.h"

/**
 * _strlen - outputs the string len
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
 * create_file - creates a file
 * @filename: file to be created
 * @text_content: text to be written
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fildes;
	ssize_t byte_count = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	fildes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fildes == -1)
		return (-1);
	if (len)
		byte_count = write(fildes, text_content, len);

	close(fildes);

	return (byte_count == len ? 1 : -1);
}
