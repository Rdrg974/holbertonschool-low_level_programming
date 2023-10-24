#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: char
 *
 * Not Return
 */

void puts2(char *str)
{
	int i = 0;

	while (1)
	{
		if (str[i] == '\0')
			break;
		else if (i % 2 == 1)
			i++;
		else
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
