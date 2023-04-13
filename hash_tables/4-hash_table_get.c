#include "hash_tables.h"
/**
 * hash_table_get - busca un elemento a la hash table
 * @key: es una string que se relaciona con value
 * @ht: es la direccion de la hash table
 * Return: retorna NULL si ocurre un error y value si encuentra key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int indx;
	char *ky = strdup(key);

	if (ht == NULL)
		return (0);
	indx = hash_djb2((const unsigned char *)ky) % ht->size;
	if (ht->array[indx] != 0)
		while (ht->array[indx] != NULL)
			if (strcmp(ht->array[indx]->key, ky) == 0)
				return (ht->array[indx]->value);
	return (NULL);
}
