#include "lists.h"
/**
 * add_dnodeint - add a element to a Linked list
 * @head: memiry address of a next element of a linked list
 * @n: int
 * Return: return the  memiry address of an elements
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *fin = *head;
	dlistint_t *n;
	dlistint_t *p;

	if (fin == NULL)
		return (-1);
	for (i = 0; i < index; i++)/*busca el nodo a eliminar*/
	{
		if (fin->next == NULL)
			return (-1);
		fin = fin->next;
	}
	
	n = fin->next;/*guarda el puntero next*/
	p = fin->prev;/*guarda el puntero prev*/
	free(fin);/*libera el nodo*/
	if (n == NULL)/*verifica si es le ultimo nodo*/
	{
		if (p == NULL)/*verifica si es le unico nodo*/
			return (1);
		p->next = NULL;
		return (1);
	}
	else if (p == NULL)/*verifica si es el primer nodo*/
		n->prev = NULL;
	else/*si es un nodo en medio de la lista*/
	{
		p->next = n;
		n->prev = p;
	}
	return (1);
}
