#include "main.h"
/**
 *
 *
 *
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
