#include "main.h"

/**
 * _strchr - busca c en s
 *
 * @s: string
 * @c: char
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

char *_strchr(char *s, char c)
{
	int x = 0;
	char *p = '\0';

	while (s[x] != '\0' && s[x] != c)
		x++;

	if (s[x] == '\0')
	{
		return (p);
	}
	else
	{
		p = &s[x];
		return (p);
	}
}
