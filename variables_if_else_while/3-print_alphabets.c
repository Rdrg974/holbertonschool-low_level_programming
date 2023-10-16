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
	int i;

	for (a = 0; a < 26; a++)
		putchar(97 + a);
	for (i = 0; i < 26; i++)
		putchar(65 + i);
	putchar('\n');
	return (0);
}
