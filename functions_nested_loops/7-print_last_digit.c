#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - receive a int
 *
 *@x:  decimal
 *
 * Description: size
 *
 * Return: last number
 */


int print_last_digit(int x)
{
	x = x % 10;
	_putchar(abs(x) + '0');
	return (abs(x));
}
