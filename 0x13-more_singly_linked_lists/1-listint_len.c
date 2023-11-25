#include 'lists.h'

/**
 * listint_len - count the number of elements in a linked list
 * @h: pointer to the head
 * Return: the number of elements in the linked list
 */
size_t listint_len(const listint *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
