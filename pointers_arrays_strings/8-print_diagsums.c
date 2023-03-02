#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - suma las diagonales de una matriz
 *
 * @a: matriz
 * @size: dimencion de la matriz
 *
 * Description: suma las diagonales de una matriz
 *
 * Return: nada
 */

void print_diagsums(int *a, int size)
{
	int x, cont = 0;
	int i = 0;

	for (x = 0; x < size; x++)
	{
		cont = cont + a[i];
		i = i + size + 1;
	}
	printf("%d, ", cont);
	cont = 0;
	i = size - 1;
	for (x = 0; x < size; x++)
	{
		cont = cont + a[i];
		i = i + size - 1;
	}
	printf("%d\n", cont);
}
