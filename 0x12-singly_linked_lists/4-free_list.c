#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * free_list - free memory from list
 * @head: first node
 * Return: nothing
 **/
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free(head);
	}
}
