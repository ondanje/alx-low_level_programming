#include"lists.h"
/**
 * add_dnodeint- adds a new node at the beginning
 * @head: head pointer
 * @n: node to be added
 * Return:NULL if functions fails
 *        Address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/*if it's not NULL, it means there is an existing list.*/
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}
