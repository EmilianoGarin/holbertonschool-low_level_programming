#include "main.h"

/**
 * _strlen - empty point
 *
 * @s:char pointer
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int cont = 0;

	while (*(s + cont) != '\0')
		cont++;
	return (cont);
}
