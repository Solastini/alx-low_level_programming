#include "main.h"

/**
 * get_endianness - to check if the machine is little or big endian
 * Return: on big 0, on little 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}

