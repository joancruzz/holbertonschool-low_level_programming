#include "dog.h"

/**
  * init_dog - Function that initializes struct dog
  * @d: pointer to struct dog
  * @name: pointer to name
  * @age: number of age
  * @owner: pointer to owner
  * Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
