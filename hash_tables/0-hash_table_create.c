#include "hash_tables.h"
/**
 * print_binary - comber a decimal to binary and print them
 * @n: unsigned long int
 * Return: void
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ret = NULL;
	hash_node_t **array = NULL;

	ret = malloc(sizeof(hash_table_t));
	if (ret == NULL)
		return (NULL);
	array = malloc(sizeof( hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	ret->size = size;
	ret->array = array;
	return (ret);
}
