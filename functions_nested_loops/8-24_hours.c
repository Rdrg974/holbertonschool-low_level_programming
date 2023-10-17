#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i = 0;
	int l;
	int j;
	int k;

	while (i < 3)
	{
		l = 0;
		while (l < 10)
		{
			k = 0;
			while (k < 6)
			{
				j = 0;
				while (j < 10)
				{
					_putchar('0' + i);
					_putchar('0' + l);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + j);
					_putchar('\n');
					j++;
				}
				k++;
			}
			if ((i == 2) & (l == 3))
				return;
			l++;
		}
		i++;
	}
}
