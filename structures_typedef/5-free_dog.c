#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free memory with allocate dog struct
 *
 * @d: dog struct addres
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	d->name = NULL;
	d->owner = NULL;
	d->age = NULL;
	free(d);
}
