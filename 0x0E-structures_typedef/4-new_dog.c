#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @owner: dog's owner
 * @age: dog's age
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *ptr;

        ptr = malloc(sizeof(dog_t));
        if (ptr == NULL)
                return (NULL);
        strcpy(ptr->name, name);
        ptr->age = age;
        strcpy(ptr->owner, owner);
        return (ptr);
}
