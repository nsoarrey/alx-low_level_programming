#include "main.h"
/**
 * _strspn - search a string for a set of bytes
 * @s: char string array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the intial segment of `s`
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;

	while (*s++ != '\0')
	{
		while (*accept++ != '\0')
		{
			if (*s == *accept)
			{
				n++;
				break;
			}
		}
	}
	return (n);
}
