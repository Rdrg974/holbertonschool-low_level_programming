#include <stdio.h>
#include <string.h>

/**
 * compare - compare the char
 *
 * @x: pointer to a char
 * @y: pointer to a char
 *
 * Return: y
 */

int compare(char *x, char *y)
{
	while (*x && *y)
	{
		if (*x != *y)
			return (0);
		x++;
		y++;
	}
	return (*y == '\0');
}

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to a char
 * @needle: pointer to a char
 *
 * Return: s or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
