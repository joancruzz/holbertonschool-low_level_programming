#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - free pointer dog
  * @d: pointer to dog
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d == '\0')
		return;
	free(d->name);
	free(d);
	free(d->owner);
}
