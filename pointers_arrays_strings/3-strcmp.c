#include <stdio.h>
#include <string.h>

/**
 * _strcmp -  compares two strings
 *
 * @s1: pointer to an char
 * @s2: pointer to an char
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = strlen(s1);
	int j = strlen(s2);

	if (i > j)
		return (15);
	else if (i < j)
		return (-15);
	else
		return (0);
}

