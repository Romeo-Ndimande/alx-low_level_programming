#include "lists.h"
int len(const char *str);

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the head
 * @str: new string to add in the node
 *
 * Return: pointer to first address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
		new_node->str = strdup(str);
		new_node->len = len(str);
		*head = new_node;
	}

}
