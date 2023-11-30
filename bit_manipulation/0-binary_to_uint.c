#include "main.h"
#include <string.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: an integer
 * @y: an integer
 *
 * Return: a value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y ==  0)
		return (1);
	return (x * _pow_recursion(x, (y - 1)));
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary number
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;
	unsigned int uint = 0;

	if (b)
	{
		i = strlen(b) - 1;
		while (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '1')
			{
				uint += _pow_recursion(2, j);
				j++, i--;
			}
			else
				i--, j++;
		}
		if (i != -1)
			return (0);
	}
	return (uint);
}
