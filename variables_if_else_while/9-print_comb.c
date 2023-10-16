#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0
 *
 * My function: loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
		if (a < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
