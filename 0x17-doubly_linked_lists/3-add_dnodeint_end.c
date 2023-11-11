#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - adds new node at end of list.
 * @head: pointer to doubly linked  list.
 * @n: node member to be added.
 * Return: pointer to new node added, p2.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p1 = *head;
	dlistint_t *p2;

	p2 = malloc(sizeof(dlistint_t));
	if (!p2)
	{
		return (NULL);
	}
	p2->n = n;
	p2->next = NULL;
	if (*head == NULL)
	{
		*head =  p2;
		p2->prev = NULL;
		return (p2);
	}
	while (p1->next != NULL)
	{
		p1 = p1->next;
	}
	p2->prev = p1;
	p1->next = p2;
	return (p2);
}
