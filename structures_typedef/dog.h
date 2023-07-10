#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - define a dog item
 *
 * @name: the name of the dog
 * @age: age with the dog have
 * @owner: name of the dog owner
 *
 * Description: all the things a dog has
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
