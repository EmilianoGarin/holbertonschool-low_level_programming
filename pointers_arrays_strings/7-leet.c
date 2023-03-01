#include "main.h"

/**
 * leet - codigo leet 1337
 *
 * @s: string
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

char *leet(char *s)
{
	int i, x = 0;
	char comp[] = "aeotl";
	char codi[] = "43071";

	while (s[x] != '\0')
	{
		for (i = 0; i < 5; i++)
			if (s[x] == comp[i] || s[x] == (comp[i] - 32))
				s[x] = codi[i];
		x++;
	}
	return (s);
}
