#include "main.h"

/**
 * factorial - recibe un numero
 *
 * @n: int
 *
 * Description: calcula el factorial
 *
 * Return: Always 0 (success)
 */

int factorial(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
	else
	{
		if (n == 0)
			return (1);
		x = n - 1;
		x = n * factorial(x);
		return (x);
	}
}
