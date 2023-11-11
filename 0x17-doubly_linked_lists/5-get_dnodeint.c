#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns node at index
 * @h: pointer to head of doubly linked list.
 * @index: node index.
 * Return: pointer to nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head->prev != NULL)
	{
		head = head->prev;
	}
	while (p->next != NULL)
	{
		if (count == index)
			break;
		p = p->next;
		count++;
	}
	return (p);
}
