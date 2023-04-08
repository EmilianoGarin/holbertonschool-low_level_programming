#include "lists.h"
#include <stdio.h>
 /**
  * free_list - free a memory
  * @head: heder of a linked list
  * Description: free a memory of malloc
  * Return: empti
  */

void free_list(list_t *head)
{
	if (head->next != NULL)
		free_list(head->next);
	free(head);
}
