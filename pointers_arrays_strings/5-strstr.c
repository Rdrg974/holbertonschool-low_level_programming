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
		if (*X != *Y)
			return 0;
		x++;
		y++;
	}
	return (*Y == '\0');
}

/**
 * _strstrc - locates a substring
 *
 * @s: pointer to a char
 * @needle: pointer to a char
 *
 * Return: s or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
			return (s);
		s++;
	}
	return NULL;
}
