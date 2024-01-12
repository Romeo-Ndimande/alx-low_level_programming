#include "lists.h"

/**
 * dlistint_len - returns nu,ber of elements in a linked dlistint_t
 * @h: header
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	int count = 0;

	for (count = 0; h; i++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
