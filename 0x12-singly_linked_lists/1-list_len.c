#include <stdlib.h>
#include <stdio.h>
#include "list.h"

/**
 * list_len - function that returns the number of elements in a linked
 * list_t list
 * @h: header pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
