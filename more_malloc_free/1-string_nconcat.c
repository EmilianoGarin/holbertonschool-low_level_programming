#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatena 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: cantidad de caracteres del string 2 a copiar
 *
 * Description: concatena s1 con los n primeros caracteres de s2
 *
 * Return:NULL si algo falla, ret si todo esta bien
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, i = 0;
	char *ret = NULL;

	if (s2 == NULL)
		s2 = "";
	else
	{
		while (s2[i] != '\0')
			i++;
		if (i < n)
			n = i;
		i = 0;
	}
	if (s1 == NULL)
		s1 = "";
	while (s1[i] != '\0')
		i++;
	ret = malloc(sizeof(char) * (i + n + 1));
	if (ret == NULL)
		return (ret);
	for (x = 0; x < i; x++)
		ret[x] = s1[x];
	for (x = 0; x < n; x++)
		ret[x + i] = s2[x];
	ret[x + i + 1] = '\0';

	return (ret);
}
