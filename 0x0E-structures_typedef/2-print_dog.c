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
		if (d->name == NULL)
			printf("Name: %p\n", d->name);
		else
			printf("Name: %s\n", d->name);
		printf("Age: %.5f\n", d->age);		
		if (d->owner == NULL)
			printf("Owner: %p\n", d->owner);
		else
			printf("Owner: %s\n", d->owner);
	}
}
