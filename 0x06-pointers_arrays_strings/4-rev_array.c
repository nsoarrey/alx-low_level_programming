#include "main.h"
/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i <= n / 2; i++, j--)
	{

		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
