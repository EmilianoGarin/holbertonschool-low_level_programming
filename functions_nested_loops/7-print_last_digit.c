#include "main.h"

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
	_putchar(x + '0');
	return (x);
}
