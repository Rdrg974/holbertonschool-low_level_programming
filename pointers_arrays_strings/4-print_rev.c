#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse
 *
 * @s: char
 *
 * Not Return
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
