#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - type of dog
 * @name:name of dog
 * @age: age of the dog
 * @owner:owner of dog.
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
