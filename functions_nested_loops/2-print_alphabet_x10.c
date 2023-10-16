#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int a;
	int i = 0;

	while (i < 10)
	{
		for (a = 0; a < 26; a++)
			_putchar(97 + a);
		_putchar('\n');
		i++;
	}
}
