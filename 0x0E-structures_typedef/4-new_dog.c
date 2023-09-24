#include "dog.h"
#include <stdlib.h>
/**
 * new_dog:creates a structure of type dog_t
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner.
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	unsigned long int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = (dog_t *)malloc(sizeof(dog_t));
	if (!p)
		return (NULL);
	p->name = malloc(sizeof(p->name) - 1);
	if (!p->name)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < sizeof(p->name) - 1 && name[i] != '\0'; i++)
	{
		p->name[i] = name[i];
	}
	p->name[i] = '\0';
	p->age = age;
	p->owner = malloc(sizeof(p->owner) - 1);
	if (!p->name)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (j = 0; j < sizeof(p->owner) - 1 && owner[j] != '\0'; j++)
	{
		p->owner[j] = owner[j];
	}
	p->owner[j] = '\0';
	return (p);
}
