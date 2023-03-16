#include "main.h"
#include <stdlib.h>

/**
 * absolut - redibe un numero y debuelbe el balor absoluto
 *
 * @n: numero
 *
 * Description: transforma un int en un unsigned int
 *
 * Return: el valor absoluto de n
 */

unsigned int absolut(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}


/**
 * array_range - crea y retorna un malloc con numeros de min a max
 *
 * @min: numero minimo
 * @max: numero maximo
 *
 * Description: crea un malloc con los numeros de min a max
 *
 * Return: el puntero al malloc
 */
int *array_range(int min, int max)
{
	unsigned int abmin, abmax, rec, tam;
	int *ret = NULL;

	if (min > max)
		return (NULL);
	abmin = absolut(min);
	abmax = absolut(max);
	if (min < 0 && max < 0)
		tam = abmin - abmax + 1;
	else if (min > 0 && max > 0)
		tam = abmax - abmin + 1;
	else
		tam = abmin + abmax + 1;
	ret = malloc(sizeof(int) * tam);
	if (ret == NULL)
		return (NULL);
	for (rec = 0; rec < tam; rec++)
		ret[rec] = min + rec;
	return (ret);
}
