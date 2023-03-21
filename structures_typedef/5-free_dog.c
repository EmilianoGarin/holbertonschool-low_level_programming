#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - libera el malloc que guarda d
 *
 * @d: struct dog
 *
 * Description: libera el sepacio al que apunta d
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d.name);
	free(d.owner);
	free(d);
}
