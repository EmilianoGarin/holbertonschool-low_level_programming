#include "main.h"

/**
 * _strcmp - empty point
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Description: size
 *
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int cont = 0;

	while (s2[x] != '\0')
	{
		if (s1[x] != s2[x] && cont == 0)
			cont = s1[x] - s2[x];
		x++;
	}

	return (cont);
}
