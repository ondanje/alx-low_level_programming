#include"lists.h"
/**
 * pop_listint-function that deletes the head node of a list
 * @head: argument(head node)
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

	if (*head == NULL)
	{
		return (0);
	}

	current = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(current);

	return (num);
}
