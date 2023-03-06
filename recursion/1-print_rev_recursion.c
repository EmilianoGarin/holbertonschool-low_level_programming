#include "main.h"

/**
 * _print_rev_recursion - resibe una cadena de caracteres
 *
 * @s: string
 *
 * Description: imprime un string al reves
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
