# include <stdio.h>

/**
 * print_alphabet_x10 - empty point
 *
 * Description: x10
 *
 * Return: empty
 */

void print_alphabet_x10(void)
{
	int i, x;

	for (x = 0; x < 10; x++)
		for (i = 97; i < 123; i++)
			putchar(i);

	putchar(10);

}
