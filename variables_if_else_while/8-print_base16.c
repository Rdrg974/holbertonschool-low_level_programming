#include <stdio.h>

/**
 * main - Print the numbers of base 16 in lowercase
 *
 * My function: loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;
	int i = 0;

	for (a = 0; a < 16; a++)
	{
		if (a > 9)
		{
			putchar(97 + i);
			i++;
		}
		else
			putchar(48 + a);
	}
	putchar('\n');
	return (0);
}
