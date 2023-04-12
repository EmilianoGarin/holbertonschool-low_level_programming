#include "main.h"
/**
 * create_file - crea un archivo
 * @filename: char nombre del archivo
 * @text_content: texto a cargar en el erchivo 
 * Return: retorna -1 si falla, retorna 1 si esta bien
 */

int create_file(const char *filename, char *text_content)
{
	int fl, wr = 0;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fl == -1)
		return (-1);
	if (text_content != NULL)
	{	
		while (text_content[wr] != '\0')
			wr++;
		wr = write(fl, text_content, wr);
		if (wr == -1)
			return (-1);
	}
	close(fl);
	return (1);
}
