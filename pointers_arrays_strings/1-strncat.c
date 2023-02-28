#include "main.h"

/**
 * _strncat - empty point
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: size of src
 *
 * Description: size
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (*(dest + x) != '\0')
		x++;
	while ((*(src + y) != '\0') && (y != n))
	{
		*(dest + (x + y)) = *(src + y);
		y++;
	}

	if (y == n)
		 *(dest + (x + y)) = '\0';

	return (dest);

}
