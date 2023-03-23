#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - imprime un a lista de numeros con un separador
 *
 * @separator: esla string que separa los numeros
 * @n:se presupone que es la cantidad de elementos en ...
 *
 * Description:  imprime la lista de numeros con separator entre cada uno
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap; /*crea una variable que soporta la lista de variables en ...*/
	unsigned int i, x;
	char *sep = separator;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
		sep = "";
	va_start(ap, n); /*carga la lista con los balores desde n
			  *hasta la ultima variable de ...
			  */
	x = n;
	if ((sizeof(ap) / sizeof(int)) < x) /*sabiendo que espero int de ...
					     *compruebo que n no se mayor
					     */
		x = sizeof(ap) / sizeof(int);
	for (i = 0; i < x - 1; i++)
		printf("%d%s", va_arg(ap, int), sep);
	printf("%d\n", va_arg(ap, int)); /*lee el argumento de tamaño int
					  *guardado en ap
					  *(esto mueve el puntero int bytes)
					  */
	va_end(ap); /*libera el sepacio reserbado ap*/
}
