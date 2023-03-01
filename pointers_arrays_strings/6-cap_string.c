#include "main.h"

/**
 * cap_string - todas las plaabras comienzan con mayuscula
 *
 * @s: string
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

char *cap_string(char *s)
{
	int i, x = 0;
	char pre_pal[] = " 	\n,;.!\"(){}?";

	while (s[x] != '\0')
	{
		
		for (i = 0; i < 13; i++)
			if (s[x] == pre_pal[i] || x == 0)
				if (s[x + 1]  > 96 && s[x + 1] < 123)
					s[x + 1] = (s[x + 1] - 32);
		x++;
	}
	return (s);
}
