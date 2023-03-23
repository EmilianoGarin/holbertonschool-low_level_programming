#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - crea una lista de variables y suma sus baloras
 *
 * @n: int
 *
 * Description: suma los balores de la lista que va de n hasta el
 * ultimo valor ingresado
 *
 * Return: retorna la suma
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, x;
	int ret = 0;

	if (n == 0)
		return (0);
	va_start(ap, n);

	x = n;
	if ((sizeof(ap) / sizeof(int)) < n)
		x = sizeof(ap) / sizeof(int);

	for (i = 0; i < x; i++)
		ret += va_arg(ap, int);
	va_end(ap);
	return (ret);
}
