#include "hash_tables.h"
/**
 * hash_table_create - crea una tabla hash
 * @size: unsigned long int con el tamaño del arreglo
 * Return: retorna la direccion de la estructura con el arreglo y el largo
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
