#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i = 0;
	int j;
	int c;

	while (i < 10)
	{
		_putchar('0');
		j = 1;
		while (j < 10)
		{
			_putchar(',');
			_putchar(32);
			c = i * j;
			if (c > 9)
			{
				_putchar('0' + (c / 10));
				_putchar('0' + (c % 10));
			}
			else
			{
				_putchar(32);
				_putchar('0' + (i * j));
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
