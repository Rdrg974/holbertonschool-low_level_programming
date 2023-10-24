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
	int i = 0;

	if (n % 2 == 1)
		n = (n / 2) + 1;
	else
		n = n / 2;
	while (str[n + i] != '\0')
	{
		_putchar(str[n + i]);
		i++;
	}
	_putchar('\n');
}
