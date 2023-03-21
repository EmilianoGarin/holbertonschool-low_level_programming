#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - le envia los valores del array a action
 *
 * @array: puntero a arreglo de numeros
 * @size: tamaño de array
 * @action: puntero a una funcion
 *
 * Description: verifica que los punteros no esten vacios y
 * envia los numeros de array a action
 *
 * Return: vacio
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != 0 && action != 0)
		for (x = 0; x < size; x++)
			action(array[x]);
}
