#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if ((96 < c) & (c < 123))
		return (1);
	else
		return (0);
}
