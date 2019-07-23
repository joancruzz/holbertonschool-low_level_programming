#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Create a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int namelen, ownerlen, x;

	for (namelen = 0; name[namelen] != '\0'; namelen++)
		;
	for (ownerlen = 0; owner[ownerlen] != '\0'; ownerlen++)
		;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (namelen + 1));

	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (ownerlen + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}

	for (x = 0; x <= namelen; x++)
		newdog->name[x] = name[x];

	newdog->age = age;

	for (x = 0; x <= ownerlen; x++)
		newdog->owner[x] = owner[x];

	return (newdog);
}
