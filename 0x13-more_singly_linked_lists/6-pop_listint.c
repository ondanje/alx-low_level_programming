#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * pop_listint-function that deletes the head node of a list
 * @head: argument(head node)
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (head == NULL)
	{
		return (0);
	}

	current = *head;

	*head = (*head)->next;

	n = current->n;
	free(current);
	return (n);
}


