#include "main.h"

/**
 * _strspn - cuenta cunatos bytes coinsiden con los char
 * en 'accept', comensando del principio del char ' s'
 *
 * @s: string
 * @accept: char pointer
 *
 * Description: retorna el numero de conisidencias desde
 * el comienso entre 'accept' y ' s'
 *
 * Return: 0 si el primer caracter de ' s' no esta dendtro
 * de la lista de caracteres a comparar de 'accept'
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, x = 0;
	unsigned int cont = 0;
	int match = 1;

	while (match == 1 && s[x] != '\0')
	{
		i = 0;
		do {
			if (accept[i] == s[x])
			{
				match = 1;
				cont++;
			}
			else
			{
				match = 0;
			}
			i++;
		} while (match != 1 && accept[i] != '\0');
		x++;
	}
	return (cont);
}
