#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Prints str and len of a Linked list
 * @h: heder of a linked list
 * Return: return the numbers of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;

	while (1)
	{
		if (h == NULL)
			return (cont);
		cont++;
		if (h->next == NULL)
			return (cont);
		h = h->next;
	}
}
