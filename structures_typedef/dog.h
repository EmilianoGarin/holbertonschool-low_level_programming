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
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
