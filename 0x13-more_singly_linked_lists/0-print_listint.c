#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint- function that prints all the elements
 * @h:function argument(head)
 * Return:the number of nodes
 *
 * Description:prints all the elements of a listint_t list.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		;
	}

	while (h)
	{
		count++;

		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}



