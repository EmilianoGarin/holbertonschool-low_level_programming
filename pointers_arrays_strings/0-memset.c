#include "main.h"

/**
 * _memset - set s
 *
 * @s: string
 * @b: char
 * @n: unsigned int
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	char **p;

	p = &s;
	for (x = 0; x < n; x++)
		s[x] = b;
	return (*p);
}
