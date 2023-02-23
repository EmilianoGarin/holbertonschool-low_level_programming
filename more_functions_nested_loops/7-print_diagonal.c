#include "main.h"

/**
 * print_diagonal - empty point
 *
 * @n: number
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

void print_diagonal(int n)
{
	int i, x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i < x; i++)
				_putchar(' ');
			_putchar(92);
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
