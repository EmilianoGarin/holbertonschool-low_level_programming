#include "hash_tables.h"
/**
 * hash_table_print - imprime los elementos de la hash table
 * @ht: es la direccion de la hash table
 * Return: nada
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = NULL;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			if (aux->next != NULL)
				printf(", ");
			aux = aux->next;
		}
	}
	printf("}\n");
}
