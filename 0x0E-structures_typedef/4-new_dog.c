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
	unsigned long int len1 = 0, len2 = 0;
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
	for (i = 0; i < len1; i++)
	{
		p->name[i] = name[i];
	}
	p->name[i] = '\0';
	p->age = age;
	p->owner = malloc(len2 + 1);
	if (!p->owner)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (j = 0; j < len2; j++)
	{
		p->owner[j] = owner[j];
	}
	p->owner[j] = '\0';
	return (p);
}
