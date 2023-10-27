#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to an array
 *
 * Not Return
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			putchar(a[i][j]);
			j++;
		}
		i++;
		putchar('\n');
	}
}
