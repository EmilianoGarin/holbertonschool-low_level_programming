#include "lists.h"
/**
 * add_dnodeint - add a element to a Linked list
 * @head: memiry address of a next element of a linked list
 * @n: int
 * Return: return the  memiry address of an elements
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *fin = *head;
	dlistint_t *n;
	dlistint_t *p;

	if (fin == NULL)
		return (-1);
	for (i = 0; i < index; i++)
	{
		if (fin->next == NULL)
			return (-1);
		fin = fin->next;
	}
	
	if (fin->next == NULL)
	{
		if (fin->prev == NULL)
		{
			free(fin);
			return (1);
		}
		fin = fin->prev;
		free(fin->next);
	       	fin->next = NULL;
		return (1);
	}
	if (fin->prev == NULL)
	{
		fin = fin->next;
		free(fin->prev);
		fin->prev = NULL;
		return (1);
	}
	n = fin->next;
	p = fin->prev;
	fin = fin->prev;
	free(fin->next);
	fin->next = n;
	fin = fin->next;
	fin->prev = p;
	return (1);
}
