#include "main.h"

/**
 * print_square - empty point
 *
 *@size: side of the square
 *
 * Description: square
 *
 * Return: empty
 */

void print_square(int size)
{
	int i, x;

	if (size > 0)
		for (x = 0; x < size; x++)
		{
			for (i = 0; i < size; i++)
				_putchar ('#');
			_putchar(10);
		}
	else
		_putchar(10);

}
