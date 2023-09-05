#include "main.h"

#define USAGE "Usage: cp pre_filde post_filde\n"
#define ERR_NOREAD "Error: Cannot read from file %s\n"
#define ERR_NOWRITE "Error: Cannot write to %s\n"
#define ERR_NOCLOSE "Error: Cannot close filde %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 on success and -1 on failure
 */

int main(int argc, char **argv)
{
	int pre_filde = 0, post_filde = 0;
	ssize_t byte;
	char buff[READ_BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);


	pre_filde = open(argv[1], O_RDONLY);

	if (pre_filde == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	post_filde = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);

	if (post_filde == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

	while ((byte = read(pre_filde, buff, READ_BUFF_SIZE)) > 0)
	{
		if (write(post_filde, buff, byte) != byte)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	}
	if (byte == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	pre_filde = close(pre_filde);
	post_filde = close(post_filde);

	if (pre_filde)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, pre_filde), exit(100);
	if (post_filde)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, pre_filde), exit(100);

	return (EXIT_SUCCESS);
}
