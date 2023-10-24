#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _atoi -  convert a string to an integer
 *
 * @s: pointer to an char
 *
 * Return: integer
 */

int power(int a, int b)
{
	int i;
	int j = a;

	if (b == 0)
		return (1);
	for (i = 1; i < b; i++)
	{
		a *= j;
	}
	return (a);
}

int _atoi(char *s)
{
	int i = 0;
	int k = 0;
	int plus = 0;
	int moins = 0;
	int num = 0;

	while ((s[i] < '0') || (s[i] > '9'))
	{
		if (s[i] == '+')
			plus++;
		else if (s[i] == '-')
			moins++;
		i++;
	}
	while ((s[i + k] >= '0') & (s[i + k] <= '9'))
		k++;
	for (;k > 0 ; k--)
	{
		num += (s[i] - '0') * power(10, (k - 1));
		i++;
	}
	if (plus >= moins)
		return (num);
	else
		return (num *= (-1));
}
