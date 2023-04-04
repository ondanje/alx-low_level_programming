#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint- func to add a node at the beginning of a node
 * @head:function argument(head of the node)
 * @n: function argument(data of the node)
 * Return:address of the new element or NULLL if failed
 *
 * Description: func that adds a new node at the beginning of a listint_t list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	new->next = *head;

	*head = new;

	return (new);
}
