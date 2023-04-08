#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints str and len of a Linked list
 * @h: heder of a linked list
 * Return: return the numbers of elements
 */

size_t print_list(const list_t *h)
{
	size_t cont = 0;

	while (1)
	{
		if (h == NULL)
			return (cont);
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			cont++;
		} else
		{
			printf("[%d] %s\n", h->len, h->str);
			cont++;
		}
		if (h->next == NULL)
			return (cont);
		h = h->next;
	}
}
