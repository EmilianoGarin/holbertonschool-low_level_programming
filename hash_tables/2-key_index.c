#include "hash_tables.h"
/**
 * key_index - usa la funcion hash para pasar de una string a un int
 * y hace el modulo entre el largo para quedarce con un valor dentro del array
 * @size: unsigned long int con el tamaño del arreglo
 * @key: cadena de texto que se usa para hacer el hash
 * Return: retorna la direccion de la estructura con el arreglo y el largo
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int ret = hash_djb2(key) % size;
	return (ret);
}
