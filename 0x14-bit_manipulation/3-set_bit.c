#include "main.h"

/**
 * set_bit - to set a given bit index to 1
 * @n: to point the number that changes
 * @index: to set the bit index to 1
 *
 * Return: 1 on success, & -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

