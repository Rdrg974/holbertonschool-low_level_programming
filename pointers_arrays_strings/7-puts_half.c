#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 *
 * @str: char
 *
 * Not Return
 */

void puts_half(char *str)
{
	int n = strlen(str);
	int i;

	if (n % 2 == 1)
		n = (n - 1) / 2;
	else
		n = n / 2;
	for (i = 0; i < n; i++)
		_putchar(str[n + i]);
	_putchar('\n');
}
