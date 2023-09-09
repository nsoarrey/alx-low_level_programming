#include "main.h"
#include <stdlib.h>
/**
 * array_range - function to allocate memory.
 * @max: maximum array value.
 * @min: minimum array value
 *
 * Return: pointer to block of memory.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = min, j = 0; i <= max && j <= (max - min + 1); i++, j++)
	{
		p[j] = i;
	}
	return (p);
}
