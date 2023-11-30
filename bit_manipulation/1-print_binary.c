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
 * print_binary - prints the binary representation of a number
 * @n: an unigned long integer
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int j = 0;

	for (i = 0; n >= pow_recursion(2, i); i++)
		;
	if (n > 0)
		i -= 1;
	for (; i >= 0; i--)
	{
		j = pow_recursion(2, i);
		if (n >= j)
		{
			n -= j;
			_putchar('1');
		}
		else
			_putchar('0');
	}
}
