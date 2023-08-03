#include "main.h"
#include <unistd.h>
/**
 * _putchar - to write the standard output from the character c
 * @c: The printable character
 *
 * Return: 1 on success.
 * Return: -1 on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
