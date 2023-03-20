#ifndef _TASK_1_
#define _TASK_1_
/**
 * struct dog - clase dog
 * @name: Nombre
 * @age: edad
 * @owner: nombre del dueño
 *
 * Description: una clase dog con nombre, edad y dueño
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
