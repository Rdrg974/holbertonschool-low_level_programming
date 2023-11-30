#include "main.h"

/**
 * set_bit - calculate the number of bits in unsigned long int
 * @n: an unsigned long integer
 * @index: is the index of the bit you want to set
 * Return: 1 if it worked, or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
		return (-1);
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
