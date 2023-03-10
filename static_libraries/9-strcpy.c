#include "main.h"

/**
 * _strcpy - *dest *src
 *
 * @dest: char pointer
 * @src: char pointer
 *
 * Description: size
 *
 * Return: char pointer of dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;
	char *ret;

	ret = dest;
	while (*(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (ret);
}
