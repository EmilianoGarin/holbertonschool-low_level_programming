#include "lists.h"
#include <string.h>
/**
 * add_node - add a element to a Linked list
 * @head: memiry address of a next element of a linked list
 * @str: string to add
 * Return: return the  memiry address of an elements
 */
list_t *add_node(list_t **head, const char *str)
{
	char *s = strdup(str);
	unsigned int x = 0;
	list_t *ret = NULL;

	while (s[x])
		x++;
	ret = malloc(sizeof(list_t));
	if (ret == NULL)
		return (NULL);
	ret->str = s;
	ret->len = x;
	ret->next = *head;
	*head = ret;
	return (ret);
}
