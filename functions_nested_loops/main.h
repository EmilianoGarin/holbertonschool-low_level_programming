#include <stdio.h>
#include <unistd.h>
/**
 * main - empty point
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);

	_putchar(10);
}
