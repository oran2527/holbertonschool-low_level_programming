#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - add node to the first position
 * @head: first node
 * @n: integer number
 * Return: node
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
