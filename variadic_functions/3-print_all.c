#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

void print_c (va_list ap)
{
	printf("%c", va_arg(ap, int));
}

void print_i (va_list ap)
{
	printf("%d", va_arg(ap, int));
}

void print_f (va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void print_s (va_list ap)
{
	char *str =  va_arg(ap, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 *  print_all - imprime char, integer, float y string
 *
 *  @format: es un string que guarda las el tipo de vaiable ingresado
 *
 * Description: verfica que el valor pasado por format este dentro del formato
 * previsto por la funcuion, si lo esta lo imprime,
 * si no pasa al sigiente termino
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int x, j, i = 0;
	/*va_list *p = &ap;*/
	pr prt[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'0', NULL}
	};

	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		if (i != 0 && x == 1)
			printf(", ");
		x = 0;
		j = 0;
		while (prt[j].flag != '0')
		{
			if (prt[j].flag == format[i])
				prt[j].print(ap);
			x = 1;
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
