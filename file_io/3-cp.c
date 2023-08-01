#include "main.h"
#include <stdio.h>

/**
 * main - create a copy of file
 *
 * @ac: argument counter
 * @av: argument values (name and directories of file)
 *
 * Return:
 *		- 97: Incorrect number of args
 *		- 98: Can´t read from file
 *		- 99: Can´t write a copy
 *		- 100: Can´t close files
 *		- 0: Success
 */

int main(int ac, char *av[])
{
	char *buf[1024];
	int fd1, fd2;
	ssize_t fr, fw, fc;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fr = read(fd1, buf, 1024);
	if (fr == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	fw = write(fd2, buf, 1024);
	if (fw == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	fc = close(fd2);
	if (fc == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2), exit(100);

	fc = close(fd1);
	if (fc == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1), exit(100);

	return (0);
}
