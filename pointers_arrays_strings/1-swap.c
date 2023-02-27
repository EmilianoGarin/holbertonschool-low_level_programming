#include "main.h"

/**
 * swap_int - empty point
 *
 * @a: int pointer
 * @b: int pointer
 *
 * Description: swap
 *
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
