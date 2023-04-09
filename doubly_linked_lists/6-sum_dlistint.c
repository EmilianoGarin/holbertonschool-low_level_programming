#include "lists.h"
/**
 * sum_dlistint - add a element to a Linked list
 * @head: memiry address of a next element of a linked list
 * Return: return a sum of  elements in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
