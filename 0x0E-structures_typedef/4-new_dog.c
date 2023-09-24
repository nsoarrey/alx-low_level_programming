#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a structure of type dog_t
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner.
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int len1 = 0, len2 = 0;
	unsigned long int i, j;

	if (name == NULL || owner == NULL)
		return (NULL);
	p = (dog_t *)malloc(sizeof(dog_t));
	if (!p)
		return (NULL);
	while (name[len1++] != '\0')
		len1++;
	while (owner[len2++] != '\0')
		len2++;
	p->name = malloc(len1 + 1);
	if (!p->name)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < sizeof(p->name); i++)
	{
		p->name[i] = name[i];
	}
	p->age = age;
	p->owner = malloc(len2 + 1);
	if (!p->owner)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (j = 0; j < sizeof(p->owner); j++)
	{
		p->owner[j] = owner[j];
	}
	return (p);
}
