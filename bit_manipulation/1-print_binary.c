#include "main.h"
/**
 * print_binary - comber a decimal to binary and print them
 * @n: unsigned long int
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int mul = 0, cos = 0;

	for (; (mul + 2) <= n; mul += 2)
		cos++;
	if (cos > 0)
	{
		print_binary(cos);
		_putchar((n - mul) + '0');
	}
	else
		_putchar(n + '0');
}
