#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string
 *
 * @s: pointer to a char
 *
 * Return: spot a recursive
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
