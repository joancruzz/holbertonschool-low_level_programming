#ifndef DOG_H
#define DOG_H
#include <stdio.h>

/**
  * struct dog - Struct of dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  *
  * Description: Name, age, and owner of dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * struct dog_t - New type of struct
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
