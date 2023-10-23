#include "main.h"
#include <stdio.h>

/**
 * rev_string -  reverses a string
 *
 * @s: char
 *
 * Not Return
 */

void rev_string(char *s)
{
	int i;
	int j = 0;
	char *rev, t;

	rev = s;
	for (i = 0; s[i] != '\0'; ++i)
		;
	for (; j < (i - 1); j++)
		rev++;
	for (j = 0; j < (i / 2); j++)
	{
		t = *rev;
		*rev = *s;
		*s = t;

		rev--;
		s++;
	}
}
