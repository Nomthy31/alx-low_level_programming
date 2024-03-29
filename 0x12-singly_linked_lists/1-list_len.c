#include <stdlib.h>
#include "lists.h"

/**
 * list_len - computes the number of nodes in a linked list
 * @h: pointer to the list_t list to be computed
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		t++;
		h = h->next;
	}
	return (t);
}

