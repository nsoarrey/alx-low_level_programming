#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - counts and prints doubly linked list elements.
 * @h: pointer to linked list
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = h;
	int count = 0;

	if (!p)
		return (count);
	while (p->prev != NULL)
		p = p->prev;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		count++;
		p = p->next;
	}
	return (count);
}
