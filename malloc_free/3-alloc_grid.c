#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - crea un arreglo de 2 dimenciones con malloc
 *
 * @width: width
 * @height: height
 *
 * Description:crea un arreglo inicialisado con 0 de height de
 * alto y width de ancho
 *
 * Return: el puntero doble que apunta a la pocicion 0, 0
 */

int **alloc_grid(int width, int height)
{
	int x, i;
	int **ret = NULL;

	if (width <= 0 || height <= 0)
		return (ret);
	ret = (int **)malloc(sizeof(int *) * height);
	if (ret == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		ret[x] = (int *)malloc(sizeof(int) * width);
		if (ret[x] == NULL)
		{
			for (i = 0; i < x; i++)
				free(ret[i]);
			free(ret);
			return (NULL);
		}
		for (i = 0; i < width; i++)
			ret[x][i] = 0;
	}
	return (ret);
}
