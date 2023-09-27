#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - number of elements in a list
 * @h: head of list.
 * Return: number of elements.
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count 0;

	if (h)
	{
		for (;h != NULL; h = h->next)
		{
			count++;
		}
	}
	return (count);
}
