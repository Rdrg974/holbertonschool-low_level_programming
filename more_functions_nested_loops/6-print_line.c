#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
