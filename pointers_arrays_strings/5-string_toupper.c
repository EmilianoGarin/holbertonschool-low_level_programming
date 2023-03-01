#include <stdio.h>

/**
 * string_toupper - de minuscula a mayuscula
 *
 * @s: string
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

char *string_toupper(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		if (s[x] > 96 && s[x] < 123)
			s[x] = (s[x] - 32);
		x++;
	}
	return (s);
}
