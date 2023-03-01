#include "main.h"

/**
 * _memcpy - punter to punter
 *
 * @src: char pointer
 * @dest: char pointer
 * @n: unsigned int (cantidad valores que se alteran)
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;


	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
