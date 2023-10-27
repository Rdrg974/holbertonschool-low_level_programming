#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: pointer to a char
 * @accept: pointer to a char
 *
 * Return: integer positive
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
