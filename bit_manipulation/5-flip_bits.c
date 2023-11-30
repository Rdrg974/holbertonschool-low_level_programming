#include "main.h"

/**
 * count_set_bits - count the set bits in the XOR result
 * @num: an unsigned long integer
 * Return: count
 */
unsigned int count_set_bits(unsigned long int num)
{
	unsigned int count = 0;

	while (num)
	{
		count += num & 1;
		num >>= 1;
	}
	return (count);
}

/**
 * flip_bits - etermine the number of bits that need
 * to be flipped between two numbers by using the XOR
 * @n: an unsigned long integer
 * @m: an unsigned long integer
 * Return: the number of bits you would need to flip
 * to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;

	return (count_set_bits(xor_result));
}
