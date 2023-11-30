#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	unsigned int i;

	if (b == NULL)
		return (0);
	for (decimal = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (decimal);
}
