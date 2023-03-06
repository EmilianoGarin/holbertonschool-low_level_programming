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

int _strlen_recursion(char *s)
{
	int x = 1;

	if (*s != '\0')
		x = x + _strlen_recursion(++s);
	else
		return (0);
	return(x);
}
