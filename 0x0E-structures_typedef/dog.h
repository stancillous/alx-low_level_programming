#ifndef POPPY
#define POPPY

/**
 *struct dog - dog's attributes
 * @owner: dog owner
 * @age: dog's age
 * @name: name of the dog
 * Description: Define a new type struct dog with the following elements
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
