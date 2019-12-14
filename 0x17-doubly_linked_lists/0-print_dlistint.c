#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		if (temp->n != '\0')
			printf("%d\n", temp->n);
		temp = temp->next;
		n++;
	}
	return (n);
}
