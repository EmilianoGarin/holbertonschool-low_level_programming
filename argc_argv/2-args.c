#include <stdio.h>

/**
 * main - retorna la cantidad de argumentos
 *
 *@argc:cantidad de argumentos (contando el nombre del programa) *@argv:arry que contiene los nombres de los argumentos
 *
 * Description: size
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
