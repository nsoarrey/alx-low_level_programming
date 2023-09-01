#include "main.h"
/**
 * factorial:function
 * @n:number whose factorial is to be found.
 * Return:int sucess.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
