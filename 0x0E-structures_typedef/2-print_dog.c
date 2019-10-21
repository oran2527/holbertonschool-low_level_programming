#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print struct dog
 * @d: new struct dog
 **/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %.5f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
