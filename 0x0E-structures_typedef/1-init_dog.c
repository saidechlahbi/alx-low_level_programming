#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct
 *
 * @d: object name
 * @name: name
 * @age: age
 * @owner: owners name
 *
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

