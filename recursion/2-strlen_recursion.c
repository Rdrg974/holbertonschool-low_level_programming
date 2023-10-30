#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to a char
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
		return (0);
	s++;
	i = i + _strlen_recursion(s);
	return (i);
}
