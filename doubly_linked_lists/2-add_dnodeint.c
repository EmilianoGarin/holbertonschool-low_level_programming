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
	dlistint_t *back = *head;

	ret = malloc(sizeof(dlistint_t));
	if (ret == NULL)
		return (NULL);
	ret->n = n;
	ret->next = *head;
	ret->prev = NULL;

	if (*head != NULL)
	{
		while (back->next != NULL)
			back = back->next;
		back->prev = ret;
	}

	*head = ret;
	return (ret);
}
