#include <stdio.h>
#include <unistd.h>
/**
 * main - empty point
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */


char _putchar(int c)
{
	return (putchar(c));
}

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);

	_putchar(10);
}
