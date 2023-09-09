#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function to allocate memory.
 * @b: number of bytes allocated.
 *
 * Return: void pointer to memory allocated.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
