#include"lists.h"
/**
 * free_dlistint-funtion that freea the doubly linked list
 * @head: pointer to a the head node
 * Return: void
 *
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *next;

	while (temp != NULL)
	{
		/**
		 * In each iteration, it first stores the next pointer
		 * of the current node before freeing it
		 */
		next = temp->next;
		free(temp);
		temp = next;
	}
}
