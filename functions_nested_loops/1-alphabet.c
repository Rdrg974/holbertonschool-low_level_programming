#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print alphabet
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int a;

	for (a = 0; a < 26; a++)
		_putchar(97 + a);
	_putchar('\n');
}
