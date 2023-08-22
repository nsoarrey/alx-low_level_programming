#include "main.h"
/**
 * @str : is the pointer
 * _puts is function to display the literals.
 * _putchar prints the characters string one character each.
 */
void _puts(char *str)
{
	for (; *str != '\0' ; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
