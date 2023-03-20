#include "dog.h"

/**
 * init_dog - init var of struct dog
 * @name: name of dog
 * @owner: owner of the dog
 * @age: age of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
