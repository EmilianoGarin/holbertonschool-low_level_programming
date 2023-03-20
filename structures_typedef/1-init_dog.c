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
