#include "hash_tables.h"
/**
 * hash_table_print - imprime los elementos de la hash table
 * @ht: es la direccion de la hash table
 * Return: nada
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *aux = ht->array;

	printf("{");
	for (i = 0; i < ht->size; i++)
		while (aux[i]->next != NULL)
		{
			printf("'%s': '%s'", aux[i]->key, aux[i]->value);
			aux[i] = aux[i]->next;
			if (aux[i]->next != NULL)
				printf(", ");
		}
	printf("}");
}
