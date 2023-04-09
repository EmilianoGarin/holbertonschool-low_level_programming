#include "lists.h"
/**
 * insert_dnodeint_at_index - add a element to a Linked list
 * @h: memiry address of a next element of a linked list
 * @idx: index
 * @n: int
 * Return: return the  memiry address of an elements
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ret = NULL;
	dlistint_t *fin = *h;
	unsigned int i;

	ret = malloc(sizeof(dlistint_t));
	if (ret == NULL || h == NULL)
		return (NULL);
	ret->n = n;

	for (i = 0; i < idx - 1; i++)
	{
		if (fin->next == NULL)
		{
			free(ret);
			return (NULL);
		}
		fin = fin->next;
	}
	ret->next = fin->next;
	fin->next = ret;
	fin = ret->next;
	ret->prev = fin->prev;
	fin->prev = ret;
	return (ret);
}
