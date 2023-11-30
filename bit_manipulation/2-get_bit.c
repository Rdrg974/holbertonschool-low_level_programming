#include "main.h"

/**
 * get_bit - the value of a bit at a given index
 * @n: an unsigned long integer
 * @index: is the index of the bit you want to get
 * Return: the value of the bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int num_bits = sizeof(unsigned long int) * 8;

	if (index >= num_bits)
		return (-1);
	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
