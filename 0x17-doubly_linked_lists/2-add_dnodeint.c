#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - adds new node.
 * @head: pointer to head of list.
 * @n: node element.
 * Return: pointer to addedx node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;

	p = malloc(sizeof(dlistint_t));
	if (!p)
	{
		return (NULL);
	}
	p->n = n;
	p->prev = NULL;
	if ((*head) != NULL)
	{
		while ((*head)->prev != NULL)
			(*head) = (*head)->prev;
	}
	p->next = (*head);
	if ((*head) != NULL)
	{
		(*head)->prev = p;
	}
	(*head) = p;
	return (p);
}
