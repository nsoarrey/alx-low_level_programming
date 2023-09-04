#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array function.
 * @c: inititialisation character.
 * @size: size of array
 *
 * Return: char*
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p = (char *)malloc(size);

	if (p == 0 || p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);
}
