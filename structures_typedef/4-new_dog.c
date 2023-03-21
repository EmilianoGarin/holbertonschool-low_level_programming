#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - crea e inicia un a instancia de dog_t
 *
 * @name: nombre
 * @age: edad
 * @owner: dueño
 *
 * Description: crea e  inicia un a instancia de dog_t
 *
 * Return: un puntero a la bariable donde se almacena la instancia
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int x, j, y = 0;
	dog_t *k9;

	k9 = malloc(sizeof(dog_t));
	if (k9 == NULL)
		return (NULL);
	while (name[y] != '\0')
		y++;
	(*k9).name = malloc(sizeof(char *) * ++y);
	if ((*k9).name == NULL)
	{
		free(k9);
		return (NULL);
	}

	x = 0;
	while (owner[x] != '\0')
		x++;
	(*k9).owner = malloc(sizeof(char *) * ++x);
	if ((*k9).owner == NULL)
	{
		free((*k9).name);
		free(k9);
		return (NULL);
	}

	for (j = 0; j < y; j++)
		(*k9).name[j] = name[j];

	(*k9).age = age;

	for (j = 0; j < x; j++)
		(*k9).owner[j] = owner[j];
	return (k9);
}
