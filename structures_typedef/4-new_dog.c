#include "dog.h"

/**
 * new_dog - create a new slot in memory of type dog and initalize it
 *
 * @name: name to initialize dog
 * @age: age to initialize dog
 * @owner: owner to initalize dog
 *
 * Return:
 *	- NULL if an error has ocurred
 *	- pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		return (NULL);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
