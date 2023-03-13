#include "main.h"
#include <stdlib.h>

/**
 * free_grid - libera la memoria pedida con malloc en grid
 *
 * @grid: matriz de 2 dimenciones
 * @height: altura de la matriz
 *
 * Description: libera cada malloc que forman las filas y por
 * ultimo el arreglo que las contenia
 *
 * Return: no retorna nada
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
