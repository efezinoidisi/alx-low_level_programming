#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: dog variable
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL) 
		free(d->owner);
	free(d);
}
