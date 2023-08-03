#include "main.h"

/**
 * clear_bit - to set the given bit value to 0
 * @n: points the number to be changed
 * @index: clears the bit index
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
