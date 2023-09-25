#include "lists.h"
#include <stddef.h>
/**
 * list_len - calculates number of elements in a list.
 * @h: pointer to list of type list_t.
 *
 * Return:
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	for (; h != NULL; h = h->next)
	{
		count++;
	}
	return (count);
}
