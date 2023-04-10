#include "main.h"

/**
 * get_bit - bisca u debuelbe el valor del bit en la pocision index
 * @n: numero en decimal a buscar su bit index
 * @index:posicion del bit que se busca
 * Return: retorna el bit buscado o -1 si sucede algun error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		n /= 2;
	if (n == 0)
		return (-1);
	return (n % 2);
}
