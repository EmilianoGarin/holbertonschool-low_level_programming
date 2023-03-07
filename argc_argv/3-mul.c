#include <stdio.h>

/**
 * main - retorna la cantidad de argumentos
 *
 *@argc: cantidad de argumentos
 *(contando el nombre del programa)
 *@argv: arry que contiene los nombres de los argumentos
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int i = 0;
	int cont = 0;
	int cont1 = 0;

	if (argc < 3)
	{
		printf("Error");
		return (-1);
	}
	while (argv[1][x] != '\0')
	{
		if (argv[1][x] != '-')
			cont = (argv[1][x] - '0') + cont;
		else
			i = -1;
		x++;
		if (argv[1][x] != '\0')
			cont = cont * 10;
	}
	if (i == -1)
		cont = cont * i;
	i = 0;
	x = 0;
	while (argv[2][x] != '\0')
	{
		if (argv[2][x] != '-')
			cont1 = (argv[2][x] - '0') + cont1;
		else
			i = -1;
		x++;
		if (argv[2][x] != '\0')
			cont1 = cont1 * 10;
	}
	if (i == -1)
		cont = cont * i;
	printf("%d\n", cont * cont1);
	return (0);
}
