#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copia una str en un espacio de memoria dinamica
 *
 * @str: string
 *
 * Description: calcula el largo de str, crea malloc y copia los
 * caracteres
 *
 * Return: el puntero a el espacio reserbado con malloc
 */

char *_strdup(char *str)
{
	unsigned int x, i = 0;
	char *txt = NULL;

	if (str != NULL)
	{
		while (str[i] != '\0')
			i++;
		i++;
		txt = malloc(i * sizeof(char));
		if (txt == NULL)
			return (txt);
		for (x = 0; x < i; x++)
			txt[x] = str[x];
	}
	return (txt);
}
