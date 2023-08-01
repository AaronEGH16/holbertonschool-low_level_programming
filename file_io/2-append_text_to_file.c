#include "main.h"

/**
 * append_text_to_file - add new content at end of file
 *
 * @filename: name and path directory of file
 * @text_content: content to insert in archive
 *
 * Return:
 *		- 1 success
 *		- -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t fw, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
