#include "main.h"

/**
 * rev_string - empty point
 *
 * @s: char pointer
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

void rev_string(char *s)
{
	int x = 0;
	int i = 0;
	char j[500];

	while (*(s + x) != '\0')
	{
		j[x] = *(s + x);
		x++;
	}
	x = x - 1;
	for (; x > -1; x--)
	{
		*(s + i) = j[x];
		i++;
	}
}
