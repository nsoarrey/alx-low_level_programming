#include "main.h"
/**
 * @reverse_array: function to perform array reversal.
 *
 * @i: upward counter,
 * @j : download counter.
 * @tmp : temporary variable.
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, j = n - 1; i <= n / 2; i++, j--)
	{
		int tmp;

		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
