#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds node at end of list
 * @head: pointer to list.
 * @n: member.
 * Return: address of new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *p = *head;

	if (!n)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = new;
	return (new);
}
