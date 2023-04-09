#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
size_t _print_dlistint_backward(const dlistint_t *h)
		{
					    const dlistint_t *current = h;
					    		        size_t count = 0;

											    if (h == NULL)
												    				            return (0);

											    			        while (current->next != NULL)
																					        current = current->next;

																			    while (current != NULL)
																				    					        {
																																		        printf("%d\n", current->n);
																																											        current = current->prev;
																																																					        count++;
																																																																    }

																			    				        return (count);
																									}

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	    dlistint_t *head;

	        head = NULL;
		    add_dnodeint_end(&head, 0);
		        add_dnodeint_end(&head, 1);
			    add_dnodeint_end(&head, 2);
			        add_dnodeint_end(&head, 3);
				    add_dnodeint_end(&head, 4);
				        add_dnodeint_end(&head, 98);
					    add_dnodeint_end(&head, 402);
					        add_dnodeint_end(&head, 1024);
						    print_dlistint(head);
						    _print_dlistint_backward(head);
						        return (EXIT_SUCCESS);
}
