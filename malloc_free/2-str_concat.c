#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatener 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Description: cuenta los caracteres de s1 y s2 para pedir el
 * espacio en malloc y despues copia s1 segido s2
 *
 * Return: el puntero de a la pocision del espacio reserbado
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int x, i, j = 0;
	char *ret = NULL;

	x = 0;
	if (s1 != NULL)
	{
		while (s1[j] != '\0')
			j++;
	}
	else
		*s1 = '\0';
	x = x + j;
	i = 1;
	j = 0;
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}
	else
		*s2 = '\0';
	i = i + j;
	ret = malloc(sizeof(char) * (x + i));
	if (ret == NULL)
		return (ret);
	for (j = 0; j < x; j++)
		ret[j] = s1[j];
	for (j = 0; j < i; j++)
		ret[j + x] = s2[j];
	return (ret);
}
