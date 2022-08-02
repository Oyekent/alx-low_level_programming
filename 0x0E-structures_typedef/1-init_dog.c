#include "dog.h"

/**
 * init_dog - A function that initializes a variable of type struct dog.
 *
 * @d: A pointer to the type.
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 *
 * Return - Nothing.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
