#include "hash_tables.h"
/**
 * hash_table_delete - livera la memoria usada en la hash table
 * @ht: es la direccion de la hash table
 * Return: nada
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *nex = NULL, *aux = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			nex = aux->next;
			free(aux->key);
			free(aux->value);
			free(aux);
			aux = nex;
		}
	}
	free(ht->array);
	free(ht);
}
