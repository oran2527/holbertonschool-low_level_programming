#include "lists.h"
/**
 * list_len - print list nodes
 * @h: node
 * Return: number of nodes
 **/
size_t list_len(const list_t *h)
{
	unsigned int n = 0;
	const list_t *temp;
	temp = NULL;

	temp = h;

	while (temp->next != NULL)
	{
		temp = temp->next;
		n++;
	}
	n++;
	return (n);
}
