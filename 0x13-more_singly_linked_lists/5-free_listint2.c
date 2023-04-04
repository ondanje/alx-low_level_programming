#include"lists.h"
/**
 * free_listint2-function that frees a listint_t list
 * @head:argument(head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
	{
		;
	}

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);

		*head = next_node;
	}
	head = NULL;
}
