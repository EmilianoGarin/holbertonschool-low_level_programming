#include "function_pointers.h"

/**
 * int_index - busca un numero en particular
 *
 * @array: arreglo de int
 * @size: tmañom del array
 * @cmp: funcion que verifica el numero
 *
 * Description: busca en un arreglo un numero que verifica cmp
 *
 * Return: -1 si no se encuentra el numero en el arreglo o este
 * es vacio, si no devuelve en que pocicion se encuentra el numero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x, cmpret;

	if (size > 0 || array != 0 || cmp != 0)
		for (x = 0; x < size; x++)
		{
			cmpret = cmp(array[x]);
			if (cmpret != 0)
				return (x);
		}

	return (-1);
}
