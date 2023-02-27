#include "main.h"
#include <stdio.h>

/**
 * _puts - empty point
 *
 * @str: char pointer
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar(10);
}
