#include <stdio.h>
/**
 * print_to_98 - receive a int
 *
 * @n: decimal
 *
 * Description: namber to 98
 *
 * Return:  0 is good
 */
void print_to_98(int n)
{
	printf("%d", n);
	if (n > 98)
		for (n = n - 1; n > 97; n--)
			printf(", %d", n);
	if (n < 98)
		for (n = n + 1; n < 99; n++)
			printf(", %d", n);
	printf("\n");
}
