#include"lists.h"
/**
 * sum_listint-function that returns the sum of all the data (n)
 * @head: argument
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	sum = 0;
	
	while (head)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
