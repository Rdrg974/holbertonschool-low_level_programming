#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int i = 0;
	int j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar(35);
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
