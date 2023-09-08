#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function to allocate memory for array
 * @nmemb: number of elements.
 * @size: size of each element in bytes.
 * Return: pointer to initialized memory block.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	s = p;
	for (i = 0; i < (size * nmemb); i++)
	{
		s[i] = 0;
	}
	return (p);
}
