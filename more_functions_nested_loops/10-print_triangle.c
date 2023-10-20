#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < (size - i); j++)
		{
			_putchar(32);
		}
		for (k = 0; k < (size - j); k++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
