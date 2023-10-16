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

	for (a = 0; a < 26; a++)
		putchar(97 + a);
	putchar('\n');
	return (0);
}
