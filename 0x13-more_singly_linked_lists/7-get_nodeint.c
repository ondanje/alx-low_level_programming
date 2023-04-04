#include<stdio.h>
#include<stdlib.h>
#include"lists.h"
/**
 * get_nodeint_at_index-function that returns the nth node of a linked list
 * @head: function parameter(head node)
 * @index: position of the node
 * Return:the indexed node or NULL if the node is doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}
	return (head);
}

