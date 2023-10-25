#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: pointer to a char
 *
 * Return: s
 */

char *cap_string(char *s)
{
	int i  = 0;

	if ((s[i] > 96) & (s[i] < 124))
	{
		s[i] = s[i] - 32;
		i++;
	}
	while (s[i] != '\0')
	{
		if (((s[i] == ' ') || (s[i] == '.') || (s[i] == '\n') || (s[i] == '\t')) &
		((s[i + 1] > 96) & (s[i + 1] < 124)))
		{
			s[i + 1] = s[i + 1] - 32;
			i++;
		}
		else if (((s[i] == '.') || (s[i] == '!') || (s[i] == '?')) &
		(s[i + 1] == ' ') &
		((s[i + 2] > 96) & (s[i + 2] < 124)))
		{
			s[i + 2] = s[i + 2] - 32;
			i++;
		}
		else
			i++;
	}
	return (s);
}
