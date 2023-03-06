#include "main.h"

/**
 * _sqrt_recursion - ingresa un valor 
 *
 * @n: int
 *
 * Description: se calcula la raiz cuadrada de n
 *
 * Return: la raiz cuadrada
 */


int _sqrt_recursion(int n)
{
	int x;

	if (n > 0)
	{
		if (n == 1)
			return (1);
		else if (n % 4 == 0)
			x = 2 * _sqrt_recursion(n / 4);
		else if (n % 9 == 0)
			x = 3 * _sqrt_recursion(n / 9);
		else if (n % 25 == 0)
			x = 5 * _sqrt_recursion(n / 25);
		else if (n % 49 == 0)
			x = 7 * _sqrt_recursion(n / 49);
		else if (n % 81 == 0)
			x = 9 * _sqrt_recursion(n / 81);
		else
			return (-1);
	}
	else if (n == 0)
		return (0);
	else
		return (-1);
	if (x < 0)
		return (-1);
	return (x);
}
