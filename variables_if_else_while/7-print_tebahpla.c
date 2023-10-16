#include <stdio.h>

/**
 * main - Print the alphabet
 *
 * My function: loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 25; a > -1; a--)
		putchar(97 + a);
	putchar('\n');
	return (0);
}
