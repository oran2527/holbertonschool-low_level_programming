#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdlib.h>

/*
 * Structs, enums and unions definitions
 * Typedefs
 * prototypes
 */


int _putchar(char c);

/**
 * struct dog - struct of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: struct of a dog wit name age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /* _HOLBERTON_H_ */
