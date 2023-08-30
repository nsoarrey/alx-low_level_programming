#include "main.h"
/**
 * _memcpy: copies memory area
 * @dest: destinatiom memory
 * @src: source memory
 *
 * Return:
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*dest++ = *src++;
	}
	return (dest);
}
