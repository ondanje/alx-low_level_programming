#include"lists.h"
/**
 * reverse_listint-function that reverses a listint_t linked list
 * @head:function argument(head node)
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp = NULL;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = temp;

		temp =  current;

		current = next;
	}
	*head = temp;

	return (temp);
}
