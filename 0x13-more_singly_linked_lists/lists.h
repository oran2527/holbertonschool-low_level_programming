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
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);

#endif /* _HOLBERTON_H_ */
