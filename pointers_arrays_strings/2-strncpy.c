#include "main.h"

/**
 * _strncpy - empty point
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;


	while ((*(dest + x) != '\0') && (*(src + x) != '\0') && (x != n))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}
