#include "main.h"
/**
 * append_text_to_file - carga un texto al final
 * @filename: char nombre del archivo
 * @text_content: texto a cargar en el erchivo
 * Return: retorna -1 si falla, retorna 1 si esta bien
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fl, wr = 0;

	if (filename == NULL)
		return (-1);
	fl = open(filename, O_WRONLY | O_APPEND);
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
