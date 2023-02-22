#include "main.h"

/**
 * print_line - empty point
 *
 *@n: number
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

void print_line(int n)
{
	int i;

	if (n < 0)
		n = 0;
	for (i = 0; i < n + 1; i++)
		_putchar('_');
	_putchar(10);
}
