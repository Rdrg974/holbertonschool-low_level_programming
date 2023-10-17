#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
