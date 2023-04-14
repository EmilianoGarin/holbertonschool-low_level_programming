#include "hash_tables.h"
/**
 * hash_table_print - imprime los elementos de la hash table
 * @ht: es la direccion de la hash table
 * Return: nada
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x, i = 0;
	hash_node_t *aux = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		x = 0;
		aux = ht->array[i];
		while (aux != NULL)
		{
			printf("'%s': '%s'", aux->key, aux->value);
			if (aux->next != NULL)
				printf(", ");
			aux = aux->next;
			x = 1;
		}
		if (i < ht->size - 1 && ht->array[i + 1] != NULL && x == 1)
			printf(", ");
	}
	printf("}\n");
}
