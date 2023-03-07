#include <stdio.h>

/**
 * main - retorna la cantidad de argumentos 
 *
 *@argc:cantidad de argumentos (contando el nombre del programa)
 *@argv
 * Description: size
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	if (argc < 0)
		printf("%s\n", argv[0]);
	printf("%d\n", argc - 1);
	return (0);
}
