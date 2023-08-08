#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- to read the text file that prints STDOUT.
 * @filename: the reading text file
 * @letters: letters amount to be read
 * Return: the exact number of bytes which read and printed - w
 *         the filename is NULL or the function fails - 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

