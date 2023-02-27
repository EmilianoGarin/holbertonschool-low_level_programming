#include "main.h"

/**
 * rev_string - empty point
 *
 * @s: char pointer
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

void rev_string(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	x = x - 1;
	for (; x > -1; x--)
		_putchar(*(s + x));
}
