#include "main.h"

/**
 * _pow_recursion - ingresa un numero y la potencia
 *
 * @x: es el numero
 * @y: es la potencia
 *
 * Description: calcula la potencia de x elebado a y
 *
 * Return: retorna el resultado
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		if (y == 0)
			return (1);
		i = x * _pow_recursion(x, --y);
		return (i);
	}
}
