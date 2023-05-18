#include"lists.h"
/**
 * get_dnodeint_at_index-function that returns the nth position
 * @head: function parameter(head node)
 * @index: position of the node
 * Return:the indexed node or NULL if the node is doesnt exist
 *
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;

	}
	return (NULL);
}
