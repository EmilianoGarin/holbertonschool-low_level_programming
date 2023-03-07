#include "main.h"

/**
 * _strpbrk - indica donde se encontro una coinsidencia
 *
 * @s: string
 * @accept: char pointer
 *
 * Description: indica donde se encontro una coinsidencia
 *
 * Return: NULL si no hay coinsidencia de lo contrario
 * retorna la ubicacion del donde se encontro la coinsidendcia
 */

char *_strpbrk(char *s, char *accept)
{
	int i, x = 0;
	char *p;

	while (s[x] != '\0')
	{
		i = 0;
		do {
			if (accept[i] == s[x])
			{
				p = &s[x];
				return (p);
			}
			i++;
		} while (accept[i] != '\0');
		x++;
	}
	return ('\0');
}
