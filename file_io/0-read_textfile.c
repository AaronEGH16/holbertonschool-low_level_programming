#include "main.h"

/**
 * read_textfile - read the file content and print in screen
 *
 * @filename: name and path directory of the file
 * @letters: number of letters to print
 *
 * Return:
 *		- 0 if a error has ocurred
 *		- count of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;

	int fd;
	ssize_t fr, fw;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	fr = read(fd, buf, letters);
	if (fr == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	fw = write(STDOUT_FILENO, buf, fr);
	if (fw == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);
	return (fr);
}
