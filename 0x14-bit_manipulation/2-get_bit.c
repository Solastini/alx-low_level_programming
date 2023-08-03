#include "main.h"

/**
 * get_bit - to return the bit value of a decimal number at an index
 * @n: searchs a number
 * @index: the bit index
 *
 * Return: the value index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

