#include "main.h"

/**
 * is_prime_number - numeros primos
 *
 * @n: string
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
		return (0);
	else if ((n % n) % 1 == 0)
		return (1);
	else
		return (1);
}
