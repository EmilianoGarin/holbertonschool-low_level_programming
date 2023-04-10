#include "main.h"

/**
 * _pow - calcula la potencia de cualquier numero
 * @base: es el numero a multiplicar
 * @p: es el numero de veces que se multiplica
 * Return: retorna la potencia del numero base, si p es 0
 * retorna 1, dado que la potencia de un numero a la 0 es 1
 */
unsigned int _pow(unsigned int base, unsigned int p)
{
	unsigned int ret = 1;

	if (p == 0)
		return (1);
	for (; p > 0; p--)
		ret = ret * base;
	return (ret);
}
/**
 * binary_to_uint - pasa de binario a decimal
 * @b: cadena con los caracteres a combertir
 * Return: retorna el valor de la cadena en decimal
 * en una varible unsigned int, retorna 0 si algo sale mal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0;
	int x, j, i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i--;
	j = i;
	for (; i > -1; i--)
	{
		x = (b[i] - '0');
		ret = ret + (_pow(2, j - i) * x);
	}
	return (ret);
}
