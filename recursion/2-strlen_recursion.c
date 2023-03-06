#include "main.h"

/**
 * _strlen_recursion - resibe una cadena de caracteres
 *
 * @s: string
 *
 * Description: cuaenta los caracteres del string
 *
 * Return: Always 0 (success)
 */

int _strlen_recursion(char *s)
{
	int x = 1;

	if (*s != '\0')
		x = x + _strlen_recursion(++s);
	else
		return (0);
	return (x);
}
