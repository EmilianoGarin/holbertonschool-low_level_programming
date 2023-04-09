#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a element to the end of a Linked list
 * @head: memiry address of a next element of a linked list
 * @str: string to add
 * Return: return the  memiry address of an elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s = strdup(str);
	unsigned int x = 0;
	list_t *fin = *head;
	list_t *ret = NULL;

	while (s[x])
		x++;
	ret = malloc(sizeof(list_t));
	if (ret == NULL)
		return (NULL);
	ret->str = s;
	ret->len = x;
	ret->next = NULL;
	if (*head == NULL)
		*head = ret;
	else
	{
		while (fin->next != NULL)
			fin = fin->next;
		fin->next = ret;
	}
	return (ret);
}
