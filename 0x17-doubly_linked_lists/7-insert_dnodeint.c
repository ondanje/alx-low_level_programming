#include"lists.h"
/**
 * insert_dnodeint_at_index-function that inserts new_node at a given position
 * @h: pointer to pointer to the head of a node
 * @idx: position where new_node node should be added
 * @n: the data
 * Return:the address of the new_node node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new_node;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (NULL);
		}
	}

	if (temp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
