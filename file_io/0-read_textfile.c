#include "main.h"
/**
 * read_textfile - imprime text
 * @filename: char nombre del archivo
 * @letters: cantidad de letras
 * Return: retorna 0 si falla, retorna cantidad de caracteres impresos
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fl, re;
	char * txt;

	fl = open(filename, O_RDONLY);/*O_RDONLY=1*/
	if (fl == -1)
		return (0);
	txt = malloc(sizeof(char) * letters);
	re = read(fl, txt, letters);
	if (re == -1)
		return (0);
	re = write(1, txt, re);
	if (re == -1)
		return (0);
	free(txt);
	close(fl);
	return (re);
}
