#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 *
 * @c: int
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if ((c > 47) & (c < 58))
		return (1);
	else
		return (0);
}
