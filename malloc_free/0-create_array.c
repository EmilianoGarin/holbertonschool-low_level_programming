#include "main.h"
#include <stdlib.h>

/**
 * create_array - hace un arreglo dinamico
 *
 * @c: char
 * @size: tamaño del arreglo
 *
 * Description: crea un arreglo y lo llena con el caracter c
 *
 * Return: el puntero que apunta al pimer espacio reservado con
 * malloc
 */

char *create_array(unsigned int size, char c)
{
	char *ret = NULL;
	unsigned int i;

	if (size != 0)
	{
		ret = malloc(size * sizeof(char));
		if (ret == NULL)
			return (ret);
		for (i = 0; i < size; i++)
			ret[i] = c;
	}
	return (ret);
}
