#include "lists.h"
/**
 * list_len - count the lements of a Linked list
 * @h: heder of a linked list
 * Return: return the numbers of elements
 */

size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (1)
	{
		if (h == NULL)
			return (cont);
		cont++;
		h = h->next;
	}
}
