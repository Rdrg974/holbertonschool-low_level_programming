#include "main.h"

/**
 * pow_recursion - returns the value of x raised to the power of y
 * @x: an integer
 * @y: an integer
 * Return: a value
 */
unsigned long int pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y ==  0)
		return (1);
	return (x * pow_recursion(x, (y - 1)));
}

/**
 * get_bit - the value of a bit at a given index
 * @n: an unsigned long integer
 * @index: is the index of the bit you want to get
 * Return: the value of the bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int j = 0;

	for (i = 0; n >= pow_recursion(2, i); i++)
		;
	if (n > 0)
		i -= 1;
	while (1)
	{
		j = pow_recursion(2, i);
		if (n >= j)
		{
			n -= j;
			if (index == i)
				return (1);
		}
		else
			if (index == i)
				return (0);
		if (i == 0)
			break;
		i--;
	}
	return (-1);
}
