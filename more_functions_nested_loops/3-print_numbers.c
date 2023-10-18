#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
		_putchar(48 + a);
	_putchar('\n');
}
