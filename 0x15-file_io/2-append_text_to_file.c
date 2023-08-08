#include "main.h"

/**
 * append_text_to_file - to append text at the file end.
 * @filename: Indicates the file name.
 * @text_content: adds a string at the file end.
 *
 * Return: -1 - If NULL file name or function fail occurs.
 *         -1 - If the user forbidden write permissions or if the file doesnot exist.
 *          1 - If not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
