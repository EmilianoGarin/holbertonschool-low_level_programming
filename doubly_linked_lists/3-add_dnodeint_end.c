#include "lists.h"
/**
 * add_dnodeint_end - add a element to a Linked list
 * @head: memiry address of a next element of a linked list
 * @n: int
 * Return: return the  memiry address of an elements
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ret = NULL;
	dlistint_t *fin = *head;

	ret = malloc(sizeof(dlistint_t));
	if (ret == NULL)
		return (NULL);
	ret->n = n;
	ret->next = NULL;
	ret->prev = NULL;

	if (*head == NULL)
		*head = ret;
	else
	{
		while (fin->next != NULL)
			fin = fin->next;
		fin->next = ret;
		ret->prev = fin;
	}

	return (ret);
}
