#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * palindrome - return if it's a palindrome or not
 *
 * @c: pointer to a char
 * @i: an integer
 * @j: an integer
 *
 * Return: 1 or 0
 */

int palindrome(char *c, int i, int j)
{
	if ((j == i) || (c[i] == c[j + 1]))
		return (1);
	else if (c[i] == c[j])
		return (palindrome(c, ++i, --j));
	return (0);
}

/**
 * is_palindrome - return if it's a palindrome or not
 *
 * @s: pointer to a char
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;

	if (*s == '\0')
		return (1);
	else if (s[0] == s[j])
		return (palindrome(s, ++i, --j));
	return (0);
}
