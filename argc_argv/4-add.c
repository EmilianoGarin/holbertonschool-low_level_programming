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
	int x;
	int ret = 0;
	int cont = 0;
	int i = 0;

	if (argv[1] != NULL)
		for (x = 1; x < argc; x++)
		{
			i = 0;
			cont = 0;
			while (argv[x][i] != '\0')
			{
				if (argv[x][i] > 47 && argv[x][i] < 58)
					cont = cont + (argv[x][i] - '0');
				else
				{
					printf("Error\n");
					return (1);
				}
				i++;
				if (argv[x][i] == '0' || argv[x][i] != '\0')
				{
					cont = cont * 10;
				}
			}
			ret = ret + cont;
		}
	else
	{
		printf("0\n");
		return (0);
	}
	printf("%d\n", ret);
	return (0);
}
