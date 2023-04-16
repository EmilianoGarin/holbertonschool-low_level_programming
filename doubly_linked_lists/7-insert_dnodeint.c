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

	if (*h == NULL)
		return (NULL);

	for (i = 1; i < idx; i++)
	{
		if (fin == NULL)
			return (NULL);
		fin = fin->next;
	}
	ret = malloc(sizeof(dlistint_t));
	if (ret == NULL )
		return (NULL);
	ret->n = n;
	if (*h == NULL)
	{
		ret->next = NULL;
		ret->prev = NULL;
		*h = ret;
		return (ret);
	}
	if (fin != NULL)
	{
		ret->next = fin->next;
		fin->next = ret;
		ret->prev = fin;
		fin = fin->next;
		if (fin != NULL)
			fin->prev = ret;
	} 
	return (ret);
}
