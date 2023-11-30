#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: an unsigned long integer
 * @index: is the index of the bit you want to get
 * Return: 1 if it worked, or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
		return (-1);
	mask = 1UL << index;
	*n &= ~mask;
	return (1);
}

