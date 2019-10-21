#include "dog.h"
/**
 * init_dog - initialize struct dog
 * @d: new struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 * Return:  nothing
 **/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
