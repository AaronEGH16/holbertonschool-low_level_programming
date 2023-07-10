#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory with allocate dog struct
 *
 * @d: dog struct addres
 */

void free_dog(dog_t *d)
{
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
