#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node to the list.
 * @head: head of node.
 * @str: node member.
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *p;

	p = malloc(sizeof(list_t));
	if (!p)
		return (NULL);
	p->str = strdup(str);
	while (str[len] != '\0')
		len++;
	p->len = len;
	p->next = *head;
	*head = p;
	return (p);
}
