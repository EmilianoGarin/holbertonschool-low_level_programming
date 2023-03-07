#include <stdio.h>

/**
 * main - recibe su nombre en la pocicion 0 de argv
 *
 * @argc: longitud de argv
 * @argv: lista de los aracteres que acompañan al programa
 *
 * Description: imprime el nombre del programa sacado de los argumentos
 *
 * Return: Always 0 (success)
 */

int main(int argc, char  *argv[])
{
	int i = argc;

	i = 0;
	printf("%s\n", argv[i]);

	return (0);
}
