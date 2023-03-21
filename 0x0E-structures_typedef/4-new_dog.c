#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Function that creates a new dog
 * @name: String input.
 * @age: Float input.
 * @owner: String input.
 *
 * Return: NULL if function fails or returns a new pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;
	unsigned int i, n, o;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
	{
		return (NULL);
	}
	for (n = 0; name[n]; n++)
		;
	n++;

	mydog->name = malloc(n * sizeof(char));
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		mydog->name[i] = name[i];
	}
	mydog->age = age;
	for (o = 0; owner[o]; o++)
		;
	o++;

	mydog->owner = malloc(o * sizeof(char));
	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
	{
		mydog->owner[i] = owner[i];
	}
	return (mydog);
}
