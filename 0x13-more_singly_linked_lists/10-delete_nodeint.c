#include"lists.h"
/**
 * delete_nodeint_at_index-func that deletes the node at index of a listint_t
 * @head:func argument(head node)
 * @index:position of the node
 * Return: 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current;
	listint_t *new;

	if (head == NULL)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	new = current->next;
	current->next = new->next;
	free(new);
	return (1);
}
