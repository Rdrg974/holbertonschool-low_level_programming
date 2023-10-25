#include <stdio.h>
#include <string.h>

/**
 * _strchr -  locates a character in a string
 *
 * @s: pointer to a char
 * @c: char
 *
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int i;
	int j = strlen(s);

	for (i = 0; (s[i] != '\0') & (s[i] != c); i++)
		;
	if (i < (j + 1))
		return (NULL);
	else
		return (s + i);
}
