#include "lists.h"
/**
 * sum_dlistint-function that returns the sum of all the data(n)
 * @head: pointer to head of a node
 * Return: sum or 0 if the list is empty
 *
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
