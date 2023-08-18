#include "main.h"

/**
 *A function that checks for a digit (0 through 9).
 *Returns 1 if c is a digit
 *Returns 0 otherwise
 */
int _isupper(int c)
{
	int c;

	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
