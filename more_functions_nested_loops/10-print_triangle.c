#include "main.h"

/**
 * print_triangle - empty point
 *
 *@size: triangles
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

void print_triangle(int size)
{
	int i, x;

	if (size != 0)
		for (x = 0; x < size; x++)
		{
			for (i = size - 1; i > x; i--)
				_putchar(' ');
			for (i = 0; i < x + 1; i++)
				_putchar('#');
			_putchar(10);
		}
	else
		_putchar(10);
}
