#include <stdio.h>
#include "main.h"

/**
 * _islower(int c) - checks if c is lowercase character
 *
 * My function
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if ((c > 96) & (c < 123))
		return (1);
	else
		return (0);
}
