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
			if (s[x] == pre_pal[i])
				if (s[x + 1]  > 96 && s[x + 1] < 123)
					s[x + 1] = (s[x + 1] - 32);
		if (x == 0 && s[x]  > 96 && s[x] < 123)
			s[x] = (s[x] - 32);
		x++;
	}
	return (s);
}
