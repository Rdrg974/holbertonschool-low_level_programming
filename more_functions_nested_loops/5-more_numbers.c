#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Print numbers 10 times
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int a;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
				_putchar('0' + (a / 10));
			_putchar('0' + (a % 10));
		}
		_putchar('\n');
		i++;
	}
}
