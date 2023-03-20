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

/**
 * init_dog - init var of struct dog
 * @name: name of dog
 * @owner: owner of the dog
 * @age: age of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Return: void
 */

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
