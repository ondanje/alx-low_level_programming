#include<stdio.h>
#include <stdlib.h>
#include"lists.h"

/**
 * listint_len-returns the number of elements in a linked list
 * @h: function parameter
 * Return: Number of eements
 *
 * Description:function that returns the number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		;
	}
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
