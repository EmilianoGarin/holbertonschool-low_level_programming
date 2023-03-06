#include "main.h"

/**
 * _puts_recursion - ingresan una cadena de texto
 *
 * @s: string
 *
 * Description: imprimir un string usando recursion
 *
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s != '\0')
		_puts_recursion(++s);
	else
		_putchar(10);
}
