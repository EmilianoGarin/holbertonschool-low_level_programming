#include "hash_tables.h"
/**
 * hash_table_set - crea o agrega un elemento a la hash table
 * @key: es una string que se relaciona con value
 * @value: es el valor a guardar y se vincula con la key
 * @ht: es la direccion de la hash table
 * Return: retorna 0 si ocurre un error y 1 si termina bien
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int indx;
	unsigned int x = 0;
	char *val = strdup(value), *ky = strdup(key);
	hash_node_t *ne = NULL, *aux = NULL;

	if (ht == NULL)
		return (0);
	indx = hash_djb2((const unsigned char *)ky) % ht->size;
	while (val[x])
		x++;
	ne = malloc(sizeof(hash_node_t));
	if (ne == NULL)
		return (0);
	ne->key = ky;
	ne->value = val;
	if (ht->array[indx] == 0)
		ne->next = NULL;
	else
	{
		ne->next = ht->array[indx];
		aux = ht->array[indx];
		while (aux != NULL)
		{
			if (strcmp(aux->key, ky) == 0)
			{
				aux->value = val;
				free(ne);
				return (1);
			}
			aux = aux->next;
		}
	}
	ht->array[indx] = ne;
	return (1);
}
