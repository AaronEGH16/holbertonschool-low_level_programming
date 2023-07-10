#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print a dog struct content
 *
 * @d: struct pointer addres
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.1f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
