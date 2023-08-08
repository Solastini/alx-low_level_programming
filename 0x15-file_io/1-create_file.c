#include "main.h"

/**
 * create_file - to create a file
 * @filename: points a file name to be create
 * @text_content: points a string to edit the file
 *
 * Return: -1 - If fail occurs in the function
 *          1 - If not.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

