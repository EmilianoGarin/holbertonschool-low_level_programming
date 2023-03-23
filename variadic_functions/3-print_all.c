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

void print_all(const char * const format, ...)
{
	va_list ap;
	int x, i = 0;
	char *str;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (i != 0 && x == 1)
			printf(", ");
		switch (format[i]){
			case'c':
			{
				printf("%c", va_arg(ap, int));
				x = 1;
				break;
			}
			case'i':
			{
				printf("%d", va_arg(ap, int));
				x = 1;
				break;
			}
			case'f':
			{
				printf("%f", va_arg(ap, double));
				x = 1;
				break;
			}
			case's':
			{
				str =  va_arg(ap, char*);
				x = 1;
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			}
			default:
			x = 0;
		};
		i++;
	}
	printf("\n");
	va_end(ap);
}
