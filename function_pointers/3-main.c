#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - calculadora
 *
 * @argc: espacios de argv
 * @argv: arreglo con los argumentos
 *
 * Description: es una calculadora
 *
 * Return:98 si la cantidad de los argumnetos no es la correcta,
 * 99 si la operacion no se encuentra,
 * 100 si es una operacion invalida del estilo dividido 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*f)(int, int);

	if  (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		return (100);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", f(a, b));
	return (0);
}
