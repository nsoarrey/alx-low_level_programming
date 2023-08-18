#include "main.h"
/**
*print_most_numbers - prints
* owned by Bwave ICT
*Return: void
*/
void print_most_numbers(void)
{
	char c;

	c = '0';

	while (c <= '9')
	{
		if ((c == '2' || c == '4'))
		{
			c++;
		}
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
