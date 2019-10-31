#include "lists.h"
#include <stdio.h>
/**
 * print_list - print list nodes
 * @h: node
 * Return: number of nodes
 **/
size_t print_list(const list_t *h)
{
	unsigned int n = 0, i = 0;
	const list_t *temp;

	temp = h;

	while (temp->next != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil) ");
			printf("\n");
		}
		if (temp->str != NULL)
		{
			printf("[%u] ", temp->len);
			for ( ; i < temp->len; i++)
				printf("%c", temp->str[i]);
			printf("\n");
		}
		temp = temp->next;
		n++;
	}

	printf("[%u] ", temp->len);
	for (i = 0; i < temp->len; i++)
		printf("%c", temp->str[i]);
	printf("\n");
	n++;
	return (n);
}
