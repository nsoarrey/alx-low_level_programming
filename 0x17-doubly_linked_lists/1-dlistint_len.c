#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list.
 * @h: pointer to linked list.
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	int count = 0;

	if (!p)
		return (count);
	while (p->prev != NULL)
		p = p->prev;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}
