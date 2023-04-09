#include "lists.h"
/**
 * add_dnodeint - add a element to a Linked list
 * @head: memiry address of a next element of a linked list
 * @n: int
 * Return: return the  memiry address of an elements
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ret = NULL;

	ret = malloc(sizeof(dlistint_t));
	if (ret == NULL)
		return (NULL);
	ret->n = n;
	ret->next = *head;
	*head = ret;
	return (ret);
}
