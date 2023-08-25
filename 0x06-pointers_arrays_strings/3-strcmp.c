#include "main.h"
/**
 * _strcmp function compares two strings.
 * @i: counter
 * @s1 and s2 are pointers to sttings.
 * Return : int.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
			;
		}
		else if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

	}
	return (0);
}
