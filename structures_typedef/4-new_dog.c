#include "dog.h"

/**
 * init_dog - inicializa una instancia de dog
 *
 * @d: struct dog
 * @name: el nombre de la mascota (usar el . para acceder es lo mismo que ->)
 * @age: la edad
 * @owner: el nombre del dueño
 *
 * Description: carga los balores de name, age y owner en d
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		d->owner = owner;
	}
}

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
	dog_t k9;
	dog_t *yk9 = &k9;

	init_dog(&k9, name, age, owner);
	if (yk9 == 0)
		return (0);
	return (yk9);
}
