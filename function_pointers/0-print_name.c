#include "function_pointers.h"

/**
 * print_name - envia a name a la funcion f
 *
 * @name: string
 * @f: puntero a funcion que imprime
 *
 * Description: pasa name a la funcion que apunta f
 *
 * Return:
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
