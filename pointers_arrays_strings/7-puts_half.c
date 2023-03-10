#include "main.h"

/**
 * puts_half - empty point
 *
 * @str: char pointer
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

void puts_half(char *str)
{
	int x = 0;
	int i;

	while (*(str + x) != '\0')
		x++;
	if ((x % 2) != 0)
		i = ((x - 1) / 2) + 1;
	else
		i = x / 2;
	for (; i < x; i++)
		_putchar(*(str + i));
	_putchar(10);
}
