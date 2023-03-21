#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - My dog struct
 * @name: String input.
 * @age: Integer input.
 * @owner: String input.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
