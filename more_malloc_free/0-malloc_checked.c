#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - evalua si el malloc se efectuo
 *
 * @b: cantiidad de espacio a reserbar con malloc
 *
 * Description: crea un malloc con espacio b, en caso de fallo
 * termina el proseso
 *
 * Return: x si esta bien, 98 si el malloc no se efectuo
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
