#include "main.h"
#include <stdlib.h>

/**
 * _calloc - x
 *
 * @nmemb: numero de espacios de malloc
 * @size: numero de bytes que ocupa el tipo de dato
 *
 * Description: crea un malloc con nmemb espacios
 *
 * Return: el puntero al malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ret = NULL;

	if (nmemb == 0 || size == 0)
		return (ret);
	ret = malloc(size * nmemb);
	if (ret == NULL)
		return (ret);
	return (ret);
}
