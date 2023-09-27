#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds node at the beginning
 * @head: head to list .
 * @n: data .
 * Return: returns pointer to new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (!n)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;
	return (p);
}
