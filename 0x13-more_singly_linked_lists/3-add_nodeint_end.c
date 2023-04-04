#include<stdio.h>
#include<stdlib.h>
#include"lists.h"

/**
 * add_nodeint_end- Add a node at the end of the list
 * @head: func parameter(head of the list)
 * @n: data
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;

	return (new);
}
