#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>
/*
 * Structs, enums and unions definitions
 * Typedefs
 * prototypes
 */

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


int _putchar(char c);
size_t print_list(const list_t *h);

#endif /* _HOLBERTON_H_ */
