#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sums linked list elements..
 * @head: pointer to head of list.
 * Return: returns sum of elements.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;
	int sum = 0;

	if (!head)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
