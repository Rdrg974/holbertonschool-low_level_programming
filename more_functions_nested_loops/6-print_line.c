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
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
		       _putchar(95);
		       i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
