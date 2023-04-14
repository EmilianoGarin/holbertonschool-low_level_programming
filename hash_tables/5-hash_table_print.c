#include "hash_tables.h"
/**
 * hash_table_print - imprime los elementos de la hash table
 * @ht: es la direccion de la hash table
 * Return: nada
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0, i = 0;
	hash_node_t *aux = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		aux = ht->array[i];
		while (aux != NULL)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			aux = aux->next;
			if (aux != NULL)
				printf(", ");
		}
		if (i < ht->size - 1 && ht->array[i + 1] != NULL )
		{
			if (x == 1)
				printf(", ");
			x = 1;
		}
	}
	printf("}\n");
}
