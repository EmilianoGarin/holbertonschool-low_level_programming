#include "lists.h"
/**
 * get_dnodeint_at_index - get a memory address of a node in the index
 * position in the Linked list
 * @head: memiry address of a next element of a linked list
 * @index: int
 * Return: return the  memiry address of an elements
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
