#include <stdio.h>

/**
 * print_sign - receive a int
 *
 *@n: number
 *
 * Description: sort out a number in positive, negative or 0
 *
 * Return: 1 positive, 0 is 0, -1 negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}