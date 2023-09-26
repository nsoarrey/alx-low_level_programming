#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - addxs node at end of a list.
 * @head: pointer to list.
 * @str: member.
 * Return: list_t.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *p;
	list_t *h = *head;

	if (!str)
		return (NULL);
	p = malloc(sizeof(list_t));
	if (!p)
		return (NULL);
	p->str = strdup(str);
	if (!str)
	{
		free(p);
		return (NULL);
	}
	while (str[len] != '\0')
		len++;
	p->len = len;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (p);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = p;
	return (h);
}
