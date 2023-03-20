#ifndef POPPY
#define POPPY

typedef struct dog dog_t;
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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
