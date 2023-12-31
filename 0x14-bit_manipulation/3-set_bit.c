#include "main.h"
/**
 * set_bit - sets the bit at an index.
 * @n: number whose bit is to be set.
 * @index: bit position of n to be set.
 * Return: 1 in success, -1 on failure.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n |= 1 << index;
	return (1);
}
