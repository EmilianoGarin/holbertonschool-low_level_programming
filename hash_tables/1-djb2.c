#include "hash_tables.h"
/**
 * hash_djb2 - combierte una cadena de texto en un numero unico por cadena
 * @str: cadena de texto
 * Return: retorna el valor de hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;/*si tira error el valor original es 5381*/
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
