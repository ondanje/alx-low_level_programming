#include"lists.h"
/**
 * reverse_listint-function that reverses a listint_t linked list
 * @head:function argument(head node)
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *temp = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}

	while ((*head)->next != NULL)
	{
		current = (*head)->next;

		(*head)->next = temp;

		temp = *head;

		*head = current;
	}
	(*head)->next = temp;

	return (temp);
}
