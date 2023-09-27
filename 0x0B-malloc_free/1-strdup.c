#include <stdio.h>
#include"main.h"
#include <stdlib.h>
/**
 * _strdup - creates memory block and stores a copy of str.
 * @str: string to be copied into memory block.
 * Return: pointer to memory block.
 */
char *_strdup(char *str)
{
	char *p;
	int length = 0;
	int c;

	if (!str)
		return (NULL);
	while (str[length] != '\0')
	{
		length++;
	}
	p = malloc(length + 1);
	if (!p)
		return (NULL);
	for (c = 0; c < length; c++)
	{
		p[c] = str[c];
	}
	*(p + c) = '\0';
	return (p);
}
