#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function to sum variable arguments.
 * @n: last required argument.
 *
 * Return: int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, int);
	}
	va_end(p);
	return (sum);
}
