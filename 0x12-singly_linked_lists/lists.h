#ifndef _LISTS_H_
#define _LISTS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - singly linked list
 * @str: string that had been memory allocated
 * @len: length of thee string
 * @next: pointer to next node
 */

typedef struct list_s
{
	char *str;
	size_t len;
	struct list_s *next;
} list_t;


size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
