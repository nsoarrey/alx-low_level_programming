#include "main.h"
/**
 * puts prints every other character to the stdout.
 * @str is pointer variab to the string.
 * Return
 */
void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		if (*str != ' ')
			_putchar(*str++);
	}
	_putchar('\n');
}
