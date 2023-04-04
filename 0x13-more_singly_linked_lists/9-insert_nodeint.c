#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * insert_nodeint_at_index-function that inserts a new node at a given position
 * @head: head node(function parameter
 * @idx:index of the list where the new node should be added
 * @n: data
 * Return:address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	current = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		current = current->next;

		if (current == NULL)
		{
			return (NULL);
		}

	}
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
