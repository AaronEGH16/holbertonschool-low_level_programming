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
 * _strncpy - copy the string content to dest but limit string chars
 *
 * @dest: destiny of the copy
 * @src: string to copy
 * @n: limit chars of the string
 *
 * Return: returns a copy of src but only n chars
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
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
	char *copy_name;
	char *copy_owner;

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		free(d);
		return ('\0');
	}

	_strncpy(copy_name, name, _strlen(name));
	_strncpy(copy_owner, owner, _strlen(owner));

	d->name = copy_name;
	d->age = age;
	d->owner = copy_owner;

	return (d);
}
