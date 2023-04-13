#include "hash_tables.h"
/**
 * hash_table_create - crea una tabla hash
 * @size: unsigned long int con el tamaño del arreglo
 * Return: retorna la direccion de la estructura con el arreglo y el largo
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ret = NULL;
	hash_node_t **array = NULL;

	ret = malloc(sizeof(hash_table_t));
	if (ret == NULL)
		return (NULL);
	array = calloc(size, sizeof(hash_node_t *));
	if (array == NULL)
		return (NULL);
	ret->size = size;
	ret->array = array;
	return (ret);
}
