#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs.
 * @d: pointer to structure to be freed.
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
