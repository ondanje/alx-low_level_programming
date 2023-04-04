#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * free_listint2-function that frees a listint_t list
 * @head:argument(head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;
	listint_t *current;

	if (head == NULL)
	{
		;
	}

	current = *head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current);

		current = next_node;
	}
	head = NULL;
}
