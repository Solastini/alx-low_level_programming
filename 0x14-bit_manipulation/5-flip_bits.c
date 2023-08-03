#include "main.h"

/**
 * flip_bits - to count the bits number to be changed
 * gets the number from one another
 * @n: number on first
 * @m: number on second
 *
 * Return: changes the bits number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}

