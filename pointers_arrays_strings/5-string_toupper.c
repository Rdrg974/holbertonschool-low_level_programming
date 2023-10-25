#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: pointer to a char
 *
 * Return: s
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'A') & (s[i] <= 'Z'))
			i++;
		else if ((s[i] >= 'a') & (s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
			i++;
		}
		else
			i++;
	}
	return (s);
}
