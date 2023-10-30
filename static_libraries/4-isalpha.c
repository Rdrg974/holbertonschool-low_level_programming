#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: int
 *
 * My function
 *
 * Return: Nothing (Success)
 */

int _isalpha(int c)
{
	if ((c > 64) & (c < 91))
		return (1);
	else if ((c > 96) & (c < 123))
		return (1);
	else
		return (0);
}
