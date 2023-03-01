#include <stdio.h>

/**
 * reverse_array - invertir arr
 *
 * @a: int array
 * @n: size of a
 *
 * Description: invertir arr
 *
 * Return: Always 0 (success)
 */

void reverse_array(int *a, int n)
{
	int i, pibot;

	if (n % 2 != 0)
		n--;
	for (i = 0; i < n / 2; i++)
	{
		pibot = a[i];
		a[i] = a[n - i];
		a[n - i] = pibot;
	}
}
