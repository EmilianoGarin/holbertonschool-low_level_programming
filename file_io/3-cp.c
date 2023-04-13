#include "main.h"
#include <stdio.h>

/**
 * err_c - imprime el error en close
 * @x: valor
 * @fl: indicador de archivo
 * Return: void
 */
void err_c(int x, int fl)
{
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fl);
		exit(100);
	}
}
/**
 * main - recibe el nombre de 2 archivos y copia el contenido del primero
 * en el segundo
 * @ac:	cantidad de argumerntos
 * @av: arreglo de strings con los argumentos
 * Return: retorna 0 si esta bien, sino retorna el codigo de error
 */

int main(int ac, char **av)
{
	int of, nf, re, wr;
	char txt[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	of = open(av[1], O_RDONLY);
	if (of == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		return (98);
	}
	nf = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (nf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		err_c(close(of), of);
		return (99);
	}
	while ((re = read(of, txt, 1024)) > 0)
	{
		wr = write(nf, txt, re);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			err_c(close(nf), nf);
			err_c(close(of), of);
			return (99);
		}
	}
	if (re == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		err_c(close(nf), nf);
		err_c(close(of), of);
		return (98);
	}
	return (0);
}
