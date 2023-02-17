#include <stdio.h>

/**
 * print_alphabet - empty point
 *
 * Description: print a-z
 *
 * Return: empty point
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		putchar(i);

	putchar(10);

}
