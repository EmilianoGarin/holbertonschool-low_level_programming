#include "main.h"

/**
 * string_toupper - de minuscula a mayuscula
 *
 * @s: string
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[x][y]);
		_putchar(10);
	}
}
