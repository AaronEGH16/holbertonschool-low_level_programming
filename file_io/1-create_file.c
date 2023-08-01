#include "main.h"

/**
 * create_file - create a new file with text content or truncate it
 *
 * @filename: name and path directory of the file
 * @text_content: content of the new file
 *
 * Return:
 *		- 1 success
 *		- -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fw;
	ssize_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);

	fw = write(fd, text_content, len);
	if (fw == -1 || fw != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
