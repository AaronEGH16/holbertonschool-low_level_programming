#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get the lenght of string
 *
 * @st: string to get lenght
 *
 * Return: return the lenght
 */

int _strlen(char *st)
{
	int i = 0;

	if (!st)
	{
		return ('\0');
	}

	while (st[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

/**
 * _strncpy - copy the string content to dest
 *
 * @dest: destiny of the copy
 * @src: string to copy
 *
 * Return: returns a copy of src
 */

char *_strncpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}

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
	dog_t *d;
	char *copy_name = NULL;
	char *copy_owner = NULL;

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		return ('\0');
	}

	if (name)
	{
		copy_name = malloc(_strlen(name));

		if (!copy_name)
		{
			free(d);
			return ('\0');
		}

		_strncpy(copy_name, name);
	}

	if (owner)
	{
		copy_owner = malloc(_strlen(owner));

		if (!copy_owner)
		{
			free(copy_name);
			free(d);
			return ('\0');
		}

		_strncpy(copy_owner, owner);
	}
	d->name = copy_name;
	d->age = age;
	d->owner = copy_owner;
	return (d);
}
