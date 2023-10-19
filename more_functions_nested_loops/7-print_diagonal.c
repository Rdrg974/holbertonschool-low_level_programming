#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if ((n == 0) || (n < 0))
	{
		_putchar('\n');
	}
	else
	{
		_putchar(92);
		_putchar('\n');
		for (i = 0; i < (n - 1); i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
