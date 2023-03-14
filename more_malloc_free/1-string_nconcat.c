#include "main.h"
#include <stdlib.h>

/**
 * _strdup -
 *
 * @str: string
 *
 * Description: 
 *
 * Return:
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, i = 0;
	char *ret = NULL;

	while (s2[i] != '\0')
		i++;
	i++;
	if (i < n)
		n = i;
	i = 0;
	while (s1[i] != '\0')
		i++;
	ret = malloc(sizeof(char) * (i + n));
	if (ret == NULL)
		return (ret);
	for (x = 0; x < i; x++)
		ret[x] = s1[x];
	for (i = 0; i < n; i++)
		ret[x + i] = s2[i];
	return (ret);
}
