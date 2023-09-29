#include "main.h"
/**
 * clear_bit - clears bit at an index position.
 * @n: number whose bit is to be cleared.
 * @index: index of bit to be cleared.
 * Return: 1 pn success, -1 on failure.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
