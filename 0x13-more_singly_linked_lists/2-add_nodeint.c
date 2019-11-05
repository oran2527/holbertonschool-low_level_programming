#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_nodeint - add node to the first position
 * @head: first node
 * @n: integer number
 * Return: number of each node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (temp);
}
