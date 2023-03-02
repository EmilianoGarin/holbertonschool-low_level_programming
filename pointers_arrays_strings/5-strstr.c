#include "main.h"

/**
 * _strstr - busca una cadena de char
 *
 * @haystack: string
 * @needle: char pointer
 *
 * Description: busca  una cadena de char
 * de la cadena needle en haystack
 *
 * Return: NULL si no esta la cadena de needle si esta
 * debuelbe la el lugar donde comiensa en haystack
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int x = 0;
	int end = 0;
	int match = 1;

	while (haystack[x] != '\0')
		x++;
	end = x;
	x = 0;
	while (needle[x] != '\0')
		x++;
	end = end - x;
	x = 0;
	while (x <= end)
	{
		match = 1;
		i = 0;
		while (match != 0 && needle[i] != '\0')
		{
			if (needle[i] == haystack[x + i])
				match = 1;
			else
				match = 0;
			i++;
		}
		if (match == 1)
			return (&haystack[x]);
		x++;
	}
	return (NULL);
}
