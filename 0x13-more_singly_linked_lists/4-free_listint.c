#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * free_listint- func to free listint_t list
 * @head: argument(head of then list
 * Return: void /nothing
 */
void free_listint(listint_t *head)
{
	listint_t *new_node;

	while (head != NULL)
	{
		new_node = head->next;
		free(head);

		head = new_node;
	}
}
