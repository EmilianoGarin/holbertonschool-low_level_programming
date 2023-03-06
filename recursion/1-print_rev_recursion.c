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

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(++s);
		_putchar(*(--s));
	}
}
