#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function to print numbers.
 * @separator: char *
 * @n: number of intergers.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list p;

	if (separator == NULL)
		separator = "";
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(p, int);
		printf("%d", num);
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
