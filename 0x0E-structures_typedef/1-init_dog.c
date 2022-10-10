#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intialize a variable of type dog
 * @d: dog type variable
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: nothing
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
