#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @c: int
 *
 * My function
 *
 * Return: Always last digit (Success)
 */

int print_last_digit(int c)
{
	c = c % 10;
	if (c < 0)
	{
		c = c * (-1);
		return (_putchar('0' + c));
	}
	else
		return (_putchar('0' + c));
}
