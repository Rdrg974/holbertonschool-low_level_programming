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

	for (a = 0; a < 26;)
		if ((a == 4) || (a == 16))
			a++;
		else
		{
			putchar(97 + a);
			a++;
		}
	putchar('\n');
	return (0);
}
