#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: Dog struct
 * @name: String input
 * @age: Foat input
 * @owner: String input.
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
