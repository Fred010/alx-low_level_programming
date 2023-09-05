#include "main.h"

/**
 * read_textfile - reads a text file
 * and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: bytes to be read
 *
 * Return: number of bytes to be read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	ssize_t byte_count;
	char buff[READ_BUFF_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fildes = open(filename, O_RDONLY);

	if (fildes == -1)
		return (0);

	byte_count = read(fildes, &buff[0], letters);
	byte_count = write(STDOUT_FILENO, &buff[0], byte_count);

	close(fildes);

	return (byte_count);
}
