#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * print_strings - imprime un a lista de palabras con un separador
 *
 * @separator: esla string que separa las palabras
 * @n:se presupone que es la cantidad de elementos en ...
 *
 * Description:  imprime la lista de palabras con separator entre cada una
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str = NULL;
	unsigned int i, x = 0;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	x = sizeof(ap) / sizeof(char *);
	if (x > n)
		x = n;
	if (separator == NULL)
		for (i = 0; i < x - 1; i++)
		{
			str = va_arg(ap, char*);
			if (str == NULL)
				printf("%s%s", "(nil)", "");
			else
				printf("%s%s", str, "");
		}
	else
		for (i = 0; i < x - 1; i++)
		{
			str = va_arg(ap, char*);
			if (str == NULL)
				printf("%s%s", "(nil)", separator);
			else
				printf("%s%s", str, separator);
		}
	str = va_arg(ap, char*);
	if (str == NULL)
		printf("(nil)\n");
	else
		printf("%s\n", str);
	va_end(ap);
}
