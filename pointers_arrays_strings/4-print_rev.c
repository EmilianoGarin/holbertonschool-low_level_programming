#include "main.h"

/**
 * print_rev - empty point
 *
 * @s: char pointer
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

void print_rev(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	for (; x > -1; x--)
		_putchar(*(s + x));
	_putchar(10);
}
