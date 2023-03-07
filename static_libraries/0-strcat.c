#include "main.h"

/**
 * _strcat - empty point
 *
 * @dest: char pointer
 * @src: char pointer
 *
 * Description: size
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(dest + x) != '\0')
		x++;
	while (*(src + y) != '\0')
	{
		*(dest + (x + y)) = *(src + y);
		y++;
	}
	return (dest);

}
