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
	dog_t *k9;

	k9 = malloc(sizeof(dog_t));
	if (k9 == NULL)
		return (NULL);
	(*k9).name = name;
	(*k9).age = age;
	(*k9).owner = owner;
	return (k9);
}
