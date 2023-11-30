#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: an unigned long integer
 */
void print_binary(unsigned long int n)
{
	int i, bits, leading_zeros;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bits = sizeof(unsigned long int) * 8;
	leading_zeros = 1;
	for (i = bits - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if (n & mask)
		{
			leading_zeros = 0;
			_putchar('1');
		}
		else if (!leading_zeros)
			_putchar('0');
	}
}
