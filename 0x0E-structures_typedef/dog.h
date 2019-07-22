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

#endif
